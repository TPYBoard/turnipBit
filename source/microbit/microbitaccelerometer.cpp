/*
 * This file is part of the Micro Python project, http://micropython.org/
 *
 * The MIT License (MIT)
 *
 * Copyright (c) 2015 Damien P. George
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

#include "MicroBit.h"

extern "C" {

#include "py/runtime.h"
#include "modmicrobit.h"

typedef struct _microbit_accelerometer_obj_t {
    mp_obj_base_t base;
    MicroBitAccelerometer *accelerometer;
} microbit_accelerometer_obj_t;

volatile bool accelerometer_up_to_date = false;
volatile bool accelerometer_updating = false;

#define GESTURE_LIST_SIZE (8)

// We store this state globally instead of in a microbit_accelerometer_obj_t
// struct so that that whole struct does not need to go in RAM.
volatile uint16_t gesture_state = 0;                    // 1 bit per gesture
volatile uint8_t gesture_list_cur = 0;                  // index into gesture_list
volatile uint8_t gesture_list[GESTURE_LIST_SIZE] = {0}; // list of pending gestures, 4-bits per element

static void update(microbit_accelerometer_obj_t *self) {
    /* The only time it is possible for accelerometer_updating to be true here
     * is if this is called in an interrupt when it is already updating in
     * the main execution thread. This is extremely unlikely, so we just
     * accept that a slightly out-of-date result will be returned
     */
    if (!accelerometer_up_to_date && !accelerometer_updating) {
        accelerometer_up_to_date = true;
        accelerometer_updating = true;
        self->accelerometer->idleTick();
        accelerometer_updating = false;
    }
}

STATIC void accelerometer_listener(MicroBitEvent evt) {
    if (evt.value > GESTURE_NONE && evt.value <= GESTURE_SHAKE) {
        gesture_state |= 1 << evt.value;
        if (gesture_list_cur < 2 * GESTURE_LIST_SIZE) {
            gesture_list[gesture_list_cur >> 1] |= evt.value << (4 * (gesture_list_cur & 1));
            ++gesture_list_cur;
        }
    }
}

void microbit_accelerometer_init(void) {
    uBit.MessageBus.listen(MICROBIT_ID_GESTURE, MICROBIT_EVT_ANY, accelerometer_listener, MESSAGE_BUS_LISTENER_IMMEDIATE);
}

int microbit_accelerometer_get_x(microbit_accelerometer_obj_t *self) {
    update(self);
    return self->accelerometer->getX();
}

static mp_obj_t microbit_accelerometer_get_x_func(mp_obj_t self_in) {
    microbit_accelerometer_obj_t *self = (microbit_accelerometer_obj_t*)self_in;
    return mp_obj_new_int(microbit_accelerometer_get_x(self));
}
MP_DEFINE_CONST_FUN_OBJ_1(microbit_accelerometer_get_x_obj, microbit_accelerometer_get_x_func);

int microbit_accelerometer_get_y(microbit_accelerometer_obj_t *self) {
    update(self);
    return self->accelerometer->getY();
}

static mp_obj_t microbit_accelerometer_get_y_func(mp_obj_t self_in) {
    microbit_accelerometer_obj_t *self = (microbit_accelerometer_obj_t*)self_in;
    return mp_obj_new_int(microbit_accelerometer_get_y(self));
}
MP_DEFINE_CONST_FUN_OBJ_1(microbit_accelerometer_get_y_obj, microbit_accelerometer_get_y_func);

mp_obj_t microbit_accelerometer_get_z(mp_obj_t self_in) {
    microbit_accelerometer_obj_t *self = (microbit_accelerometer_obj_t*)self_in;
    update(self);
    return mp_obj_new_int(self->accelerometer->getZ());
}
MP_DEFINE_CONST_FUN_OBJ_1(microbit_accelerometer_get_z_obj, microbit_accelerometer_get_z);

void microbit_accelerometer_get_values(microbit_accelerometer_obj_t *self, int *x, int *y, int *z) {
    update(self);
    *x = self->accelerometer->getX();
    *y = self->accelerometer->getY();
    *z = self->accelerometer->getZ();
}

static mp_obj_t microbit_accelerometer_get_values_func(mp_obj_t self_in) {
    microbit_accelerometer_obj_t *self = (microbit_accelerometer_obj_t*)self_in;
    int x, y, z;
    microbit_accelerometer_get_values(self, &x, &y, &z);
    mp_obj_tuple_t *tuple = (mp_obj_tuple_t *)mp_obj_new_tuple(3, NULL);
    tuple->items[0] = mp_obj_new_int(x);
    tuple->items[1] = mp_obj_new_int(y);
    tuple->items[2] = mp_obj_new_int(z);
    return tuple;
}
MP_DEFINE_CONST_FUN_OBJ_1(microbit_accelerometer_get_values_obj, microbit_accelerometer_get_values_func);

STATIC const qstr gesture_name_map[] = {
    [GESTURE_NONE] = MP_QSTR_NULL,
    [GESTURE_UP] = MP_QSTR_up,
    [GESTURE_DOWN] = MP_QSTR_down,
    [GESTURE_LEFT] = MP_QSTR_left,
    [GESTURE_RIGHT] = MP_QSTR_right,
    [GESTURE_FACE_UP] = MP_QSTR_face_space_up,
    [GESTURE_FACE_DOWN] = MP_QSTR_face_space_down,
    [GESTURE_FREEFALL] = MP_QSTR_freefall,
    [GESTURE_3G] = MP_QSTR_3g,
    [GESTURE_6G] = MP_QSTR_6g,
    [GESTURE_8G] = MP_QSTR_8g,
    [GESTURE_SHAKE] = MP_QSTR_shake,
};

STATIC BasicGesture gesture_from_obj(mp_obj_t gesture_in) {
    qstr gesture = mp_obj_str_get_qstr(gesture_in);
    for (uint i = 0; i < MP_ARRAY_SIZE(gesture_name_map); ++i) {
        if (gesture == gesture_name_map[i]) {
            return (BasicGesture)i;
        }
    }
    nlr_raise(mp_obj_new_exception_msg(&mp_type_ValueError, "invalid gesture"));
}

mp_obj_t microbit_accelerometer_current_gesture(mp_obj_t self_in) {
    microbit_accelerometer_obj_t *self = (microbit_accelerometer_obj_t*)self_in;
    update(self);
    return MP_OBJ_NEW_QSTR(gesture_name_map[self->accelerometer->getGesture()]);
}
MP_DEFINE_CONST_FUN_OBJ_1(microbit_accelerometer_current_gesture_obj, microbit_accelerometer_current_gesture);

mp_obj_t microbit_accelerometer_is_gesture(mp_obj_t self_in, mp_obj_t gesture_in) {
    microbit_accelerometer_obj_t *self = (microbit_accelerometer_obj_t*)self_in;
    BasicGesture gesture = gesture_from_obj(gesture_in);
    update(self);
    return mp_obj_new_bool(self->accelerometer->getGesture() == gesture);
}
MP_DEFINE_CONST_FUN_OBJ_2(microbit_accelerometer_is_gesture_obj, microbit_accelerometer_is_gesture);

mp_obj_t microbit_accelerometer_was_gesture(mp_obj_t self_in, mp_obj_t gesture_in) {
    microbit_accelerometer_obj_t *self = (microbit_accelerometer_obj_t*)self_in;
    BasicGesture gesture = gesture_from_obj(gesture_in);
    update(self);
    mp_obj_t result = mp_obj_new_bool(gesture_state & (1 << gesture));
    gesture_state &= (~(1 << gesture));
    gesture_list_cur = 0;
    return result;
}
MP_DEFINE_CONST_FUN_OBJ_2(microbit_accelerometer_was_gesture_obj, microbit_accelerometer_was_gesture);

mp_obj_t microbit_accelerometer_get_gestures(mp_obj_t self_in) {
    microbit_accelerometer_obj_t *self = (microbit_accelerometer_obj_t*)self_in;
    update(self);
    if (gesture_list_cur == 0) {
        return mp_const_empty_tuple;
    }
    mp_obj_tuple_t *o = (mp_obj_tuple_t*)mp_obj_new_tuple(gesture_list_cur, NULL);
    for (uint i = 0; i < gesture_list_cur; ++i) {
        uint gesture = (gesture_list[i >> 1] >> (4 * (i & 1))) & 0x0f;
        o->items[i] = MP_OBJ_NEW_QSTR(gesture_name_map[gesture]);
    }
    gesture_list_cur = 0;
    return o;
}
MP_DEFINE_CONST_FUN_OBJ_1(microbit_accelerometer_get_gestures_obj, microbit_accelerometer_get_gestures);

STATIC const mp_map_elem_t microbit_accelerometer_locals_dict_table[] = {
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_x), (mp_obj_t)&microbit_accelerometer_get_x_obj },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_y), (mp_obj_t)&microbit_accelerometer_get_y_obj },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_z), (mp_obj_t)&microbit_accelerometer_get_z_obj },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_values), (mp_obj_t)&microbit_accelerometer_get_values_obj },
    { MP_OBJ_NEW_QSTR(MP_QSTR_current_gesture), (mp_obj_t)&microbit_accelerometer_current_gesture_obj },
    { MP_OBJ_NEW_QSTR(MP_QSTR_is_gesture), (mp_obj_t)&microbit_accelerometer_is_gesture_obj },
    { MP_OBJ_NEW_QSTR(MP_QSTR_was_gesture), (mp_obj_t)&microbit_accelerometer_was_gesture_obj },
    { MP_OBJ_NEW_QSTR(MP_QSTR_get_gestures), (mp_obj_t)&microbit_accelerometer_get_gestures_obj },
};

STATIC MP_DEFINE_CONST_DICT(microbit_accelerometer_locals_dict, microbit_accelerometer_locals_dict_table);

const mp_obj_type_t microbit_accelerometer_type = {
    { &mp_type_type },
    .name = MP_QSTR_MicroBitAccelerometer,
    .print = NULL,
    .make_new = NULL,
    .call = NULL,
    .unary_op = NULL,
    .binary_op = NULL,
    .attr = NULL,
    .subscr = NULL,
    .getiter = NULL,
    .iternext = NULL,
    .buffer_p = {NULL},
    .stream_p = NULL,
    .bases_tuple = NULL,
    .locals_dict = (mp_obj_dict_t*)&microbit_accelerometer_locals_dict,
};

const microbit_accelerometer_obj_t microbit_accelerometer_obj = {
    {&microbit_accelerometer_type},
    .accelerometer = &uBit.accelerometer,
};

}

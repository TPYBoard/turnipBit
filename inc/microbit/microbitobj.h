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
#ifndef __MICROPY_INCLUDED_MICROBIT_MICROBITOBJ_H__
#define __MICROPY_INCLUDED_MICROBIT_MICROBITOBJ_H__

extern "C" {

#include "py/obj.h"
#include "microbitpin.h"
#include "PinNames.h"

const microbit_pin_obj_t *microbit_obj_get_pin(mp_obj_t o);
PinName microbit_obj_get_pin_name(mp_obj_t o);

extern volatile bool compass_up_to_date;
extern volatile bool compass_updating;

extern volatile bool accelerometer_up_to_date;
extern volatile bool accelerometer_updating;

extern void microbit_pin_init(void);

extern bool microbit_button_is_pressed(const struct _microbit_button_obj_t *button);

extern void microbit_accelerometer_get_values(const struct _microbit_accelerometer_obj_t *acc, int *x, int *y, int *z);

}

#endif // __MICROPY_INCLUDED_MICROBIT_MICROBITOBJ_H__

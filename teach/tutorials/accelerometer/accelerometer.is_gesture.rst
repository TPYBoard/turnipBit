**获取当前动作**
======================

**获取当前动作的说明**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

	[获取当前动作插]的图例

	.. image:: images/accelerometer/accelerometer.is_gesture.png

	功能：获取当前的执行动作，可判断的动作有很多例如向上，向下，下坠，判断加速度等。

	[获取当前动作插]的动画

	.. image:: images/accelerometer/accelerometer.is_gesture.gif

**获取当前动作例程**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

坚强的往上指
::::::::::::::::::

	在TurnipBit上做一个箭头，无论TurnipBit是任何姿态，箭头都是往上指的。

	拼插源码

	.. image:: images/accelerometer/accelerometer.is_gestures.png

	实例源码::

		from microbit import *

		while True:
			if accelerometer.is_gesture("up"):
				display.show(Image.ARROW_N)
			elif accelerometer.is_gesture("down"):
				display.show(Image.ARROW_S)
			elif accelerometer.is_gesture("left"):
				display.show(Image.ARROW_E)
			elif accelerometer.is_gesture("right"):
				display.show(Image.ARROW_W)

**小试牛刀**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>


		 `立即编程`_

		.. _立即编程: http://turnipbit.tpyboard.com/

		 `下载 accelerometer.is_gestures HEX`_

		.. _下载 accelerometer.is_gestures HEX: http://turnipbit.com/download.php?fn=accelerometer.is_gestures.hex
		
		



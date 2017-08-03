**清除显示内容**
================================

**清除显示内容的说明**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

	[清除显示内容拼]的图例

	.. image:: images/display/display.clear.png

	功能：清除当前LED显示屏上面的显示内容。

	[清除显示内容拼]的动画

	.. image:: images/display/display.clear.gif

**清除显示内容例程**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

随机中断的流水灯
::::::::::::::::::

	动手DIY一个随机中断的流水灯。

	拼插源码

	.. image:: images/display/display.clears.png

	实例源码::

		from microbit import *
		import random

		X = -1
		Y = -1
		while True:
			for count2 in range(5):
				X = X + 1
				for count in range(5):
					Y = Y + 1
					display.set_pixel(X, Y, 9)
					sleep(200)
					if Y == random.randint(0, 4):
						display.clear()
				Y = -1
			X = -1

**小试牛刀**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>


		 `立即编程`_

		.. _立即编程: http://turnipbit.tpyboard.com/

		 `下载 display.clears HEX`_

		.. _下载 display.clears HEX: http://turnipbit.com/download.php?fn=display.clears.hex
		
		



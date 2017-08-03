获取指定LED亮度
================

**获取指定LED亮度**
---------------------------------------

**获取指定LED亮度说明**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

	[获取指定LED亮度插]的图例

	.. image:: images/display/display.get_pixel.png

	功能：获取指定位置的LED的当前亮度。

	参数：
		- 第一个参数为指定LED的X轴坐标，取值范围为0-4。
		- 第二个参数为指定LED的Y轴坐标，取值范围为0-4。

	[获取指定LED亮度拼]的动画

	.. image:: images/display/display.get_pixel.gif


**获取指定LED亮度例程**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

渐暗的星空
::::::::::::::::::

	动手DIY一个渐暗的星空。

	拼插源码

	.. image:: images/display/display.get_pixels.png

	实例源码::

		from microbit import *
		import random

		display.show(Image("00000:00000:00000:00000:00000").invert())
		X = 0
		Y = 0
		while True:
			sleep(300)
			if display.get_pixel(X, Y) != 0:
				display.set_pixel(X, Y, (display.get_pixel(X, Y) - 1))
			if display.get_pixel(X, Y) == 0:
				X = random.randint(0, 4)
				Y = random.randint(0, 4)


**小试牛刀**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>


		 `立即编程`_

		.. _立即编程: http://turnipbit.tpyboard.com/

		 `下载 display.get_pixels HEX`_

		.. _下载 display.get_pixels HEX: http://turnipbit.com/download.php?fn=display.get_pixels.hex
		
		

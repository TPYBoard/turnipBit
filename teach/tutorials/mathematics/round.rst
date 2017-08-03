**设置指定LED亮度**
================================

**设置指定LED亮度的说明**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

	**[设置指定LED亮度拼]的图例**


	.. image:: images/display/display.set_pixel.png

	功能：设置指定位置的LED灯的亮度。

	参数：
		- 第一个参数为指定LED的X轴坐标，取值范围为0-4。
		- 第二个参数为指定LED的Y轴坐标，取值范围为0-4。
		- 第三个参数为设定LED的亮度值，取值范围为0-9。

	[设置指定LED亮度拼]的动画

	.. image:: images/display/display.set_pixel.gif

**设置指定LED亮度的例程**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

忽闪忽闪小蓝灯
::::::::::::::::::::::::::::::

	动手DIY一个忽闪忽闪的小灯。

	拼插源码

	.. image:: images/display/display.set_pixelh.png

	实例源码::

		from microbit import *

		while True:
		  display.set_pixel(0, 0, 9)
		  sleep(500)
		  display.set_pixel(0, 0, 0)
		  sleep(500)

随机下雨
::::::::::::::::::::::::::::::

	动手DIY一个随机下雨的小面板。

	拼插源码

	.. image:: images/display/display.set_pixelh1.png

	实例源码::

		import random
		from microbit import *

		X = 0
		Y = 0
		L = 4
		while True:
			X = random.randint(0, 4)
			for count in range(5):
				display.set_pixel(X, Y, L)
				Y = Y + 1
				L = L + 1
				sleep(100)
			display.clear()
			Y = 0
			L = 4


**小试牛刀**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>


		 `立即编程`_

		.. _立即编程: http://turnipbit.tpyboard.com/

		 `下载 display.set_pixel HEX`_

		.. _下载 display.set_pixel HEX: http://turnipbit.com/download.php?fn=display.set_pixel.hex
		
		 `下载 display.set_pixel1 HEX`_

		.. _下载 display.set_pixel HEX: http://turnipbit.com/download.php?fn=display.set_pixel1.hex
		
		

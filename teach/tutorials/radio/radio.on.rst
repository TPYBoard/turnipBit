**引脚是否被触摸**
================================

**引脚是否被触摸的说明**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

	[引脚是否被触摸插]的图例

	.. image:: images/pin/pin0.is_touched.png

	功能：判断当前引脚是否被触摸，返回值为真或假。

	[引脚是否被触摸插]的动画

	.. image:: images/pin/pin0.is_touched.gif

**引脚是否被触摸例程**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

触摸小夜灯
::::::::::::::::::

	动手DIY制作一个触摸小夜灯。利用触摸检测的信号控制板子LED灯亮灭，此例程需要配合 `设置指定LED亮度拼`_ 配合完成。

	.. _设置指定LED亮度拼: http://docs.turnipbit.com/zh/latest/teach/tutorials/display/display.set_pixel.html

	拼插源码

	.. image:: images/pin/pin0.is_toucheds.png

	实例源码::

		from microbit import *


		A = 0
		while True:
			if pin0.is_touched() and display.get_pixel(0, 0) == 0:
				sleep(150)
				if pin0.is_touched():
					display.set_pixel(0, 0, 9)
			if pin0.is_touched() and display.get_pixel(0, 0) == 9:
				sleep(150)
				if pin0.is_touched():
					display.set_pixel(0, 0, 0)

**小试牛刀**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>


		 `立即编程`_

		.. _立即编程: http://turnipbit.tpyboard.com/

		 `下载 pin0.is_toucheds HEX`_

		.. _下载 pin0.is_toucheds HEX: http://turnipbit.com/download.php?fn=pin0.is_toucheds.hex
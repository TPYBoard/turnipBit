**读取引脚模拟电压**
================================

**读取引脚模拟电压的说明**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

	[读取引脚模拟电压插]的图例

	.. image:: images/pin/pin0.read_analog.png

	功能：读取当前引脚电压值，返回值为当前引脚电压的模拟值。

	[读取引脚模拟电压插]的动画

	.. image:: images/pin/pin0.read_analog.gif

**读取引脚模拟电压例程**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

智能小夜灯
::::::::::::::::::

	动手DIY制作一个智能小夜灯。利用外接光敏系统采集当前光照强度，控制板载LED亮度，光照越弱，LED越亮，此例程需要配合`设置指定LED亮度拼`_ 配合完成。

	.. _设置指定LED亮度拼: http://docs.turnipbit.com/zh/latest/teach/tutorials/display/display.set_pixel.html

	拼插源码

	.. image:: images/compass/pin0.read_analogs.png

	实例源码::

		ifrom microbit import *

		A = 0
		while True:
			A = (1050 - pin0.read_analog()) / 100
			if A > 9:
				A = 9
			if A < 0:
				A = 0
			display.set_pixel(0, 0, A)


**小试牛刀**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>


		 `立即编程`_

		.. _立即编程: http://turnipbit.tpyboard.com/

		 `下载 pin0.read_analogs HEX`_

		.. _下载 pin0.read_analogs HEX: http://turnipbit.com/download.php?fn=pin0.read_analogs.hex
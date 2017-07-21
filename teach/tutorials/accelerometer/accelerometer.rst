**获取当前加速度值**
======================

**获取当前加速度值的说明**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

	[获取当前加速度值插]的图例

	.. image:: images/accelerometer/accelerometer.png

	功能：获取当前加速度的值，分别可获取X,Y,Z轴的加速度值，返回值为当前加速度的X,Y,Z轴的加速度值。

	[获取当前加速度值插]的动画

	.. image:: images/accelerometer/accelerometer.gif

**温度例程**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

自制温度计
::::::::::::::::::

	动手DIY制作一个温度计。此DIY需要使用温度插和 `滚动消息拼`_ 配合完成。

	.. _滚动消息拼: http://docs.turnipbit.com/zh/latest/teach/tutorials/display/display.scroll.html

	拼插源码

	.. image:: images/TurnipBit/temperatures.png

	实例源码::

		from microbit import *

		while True:
			display.scroll((str(temperature()) + str('')))

**小试牛刀**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>


		 `立即编程`_

		.. _立即编程: http://turnipbit.tpyboard.com/

		 `下载 temperatures HEX`_

		.. _下载 temperatures HEX: http://turnipbit.com/download.php?fn=temperatures.hex
		
		

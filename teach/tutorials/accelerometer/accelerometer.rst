**获取当前加速度值**
======================

**获取当前加速度值的说明**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

	[获取当前加速度值插]的图例

	.. image:: images/accelerometer/accelerometer.png

	功能：获取当前加速度的值，分别可获取X,Y,Z轴的加速度值，返回值为当前加速度的X,Y,Z轴的加速度值。

	[获取当前加速度值插]的动画

	.. image:: images/accelerometer/accelerometer.gif

**加速度传感器例程**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

DIY水平测试仪
::::::::::::::::::

	动手DIY制作一个水平测试仪。此DIY需要使用获取当前加速度值插和 `显示图像拼`_ 和配合 `内置图像插`_ 完成。

	.. _显示图像拼: http://docs.turnipbit.com/zh/latest/teach/tutorials/display/display.show.html

	.. _内置图像插: http://docs.turnipbit.com/zh/latest/teach/tutorials/Image/Image.HEART.html

	拼插源码

	.. image:: images/accelerometer/accelerometers.png

	实例源码::

		from microbit import *

		while True:
			if accelerometer.get_x() <= 45:
				display.show(Image.ARROW_E)
			if accelerometer.get_x() >= 135:
				display.show(Image.ARROW_W)


**小试牛刀**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>


		 `立即编程`_

		.. _立即编程: http://turnipbit.tpyboard.com/

		 `下载 accelerometers HEX`_

		.. _下载 accelerometers HEX: http://turnipbit.com/download.php?fn=accelerometers.hex
		
		

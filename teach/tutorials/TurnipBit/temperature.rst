**温度**
======================

**温度的说明**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

	[温度插]的图例

	.. image:: images/TurnipBit/temperature.png

	功能：查询当前所在地的温度，返回值为所在地的温度，单位摄氏度。

	[温度插]的动画

	.. image:: images/TurnipBit/temperature.gif

**温度例程**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

自制温度计
::::::::::::::::::

	动手DIY制作一个温度计。

	拼插源码

	.. image:: images/Image/temperatures.png

	实例源码::

		from microbit import *


		while True:
			display.show(Image.HEART)
			sleep(300)
			display.show(Image.HEART.invert())
			sleep(300)
			.show(Image.HEART.invert())

**小试牛刀**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>


		 `立即编程`_

		.. _立即编程: http://turnipbit.tpyboard.com/

		 `下载 temperatures HEX`_

		.. _下载 temperatures HEX: http://turnipbit.com/download.php?fn=temperatures.hex
		
		

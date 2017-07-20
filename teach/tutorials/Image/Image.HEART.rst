**内置图像**
======================

**内置图像的说明**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

	[内置图像插]的图例

	.. image:: images/Image/Image.HEART.png

	功能：TurnipBit内置三十五中内置图案，使用者配合 `显示图像拼`_ ，在板载LED显示屏上显示内置图案。

	.. _[显示图像拼]: http://docs.turnipbit.com/zh/latest/teach/tutorials/display/display.show.html

	[内置图像插]的动画

	.. image:: images/Image/Image.HEART.gif

**内置图像例程**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

激动的心
::::::::::::::::::

	动手DIY一颗跳动的心。

	拼插源码

	.. image:: images/Image/display.shows.png

	实例源码::

		from microbit import *

		while True:
		  display.show(Image.HEART)
		  sleep(500)
		  display.show(Image.HEART_SMALL)
		  sleep(500)

**小试牛刀**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>


		 `立即编程`_

		.. _立即编程: http://turnipbit.tpyboard.com/

		 `下载 display.shows HEX`_

		.. _下载 display.shows HEX: http://turnipbit.com/download.php?fn=display.shows.hex
		
		

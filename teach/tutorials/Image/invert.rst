**反显图像**
======================

**反显图像的说明**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

	[反显图像插]的图例

	.. image:: images/Image/invert.png

	功能：反显当前插入此空间的图案，可供使用者配合 `[显示图像拼]`_ 使用，完成在板载LED显示屏上显示反显图案。

	.. _[显示图像拼]:: http://docs.turnipbit.com/zh/latest/teach/tutorials/display/display.show.html

	[反显图像插]的动画

	.. image:: images/Image/invert.gif

**反显图像例程**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

激动的心
::::::::::::::::::

	动手DIY一颗跳动的心。

	拼插源码

	.. image:: images/Image/invertx.png

	实例源码::

		from microbit import *

		while True:
			display.show(Image.HEART)
			display.show(Image.HEART.invert())

**小试牛刀**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>


		 `立即编程`_

		.. _立即编程: http://turnipbit.tpyboard.com/

		 `下载 display.shows HEX`_

		.. _下载 display.shows HEX: http://turnipbit.com/download.php?fn=invertx.hex
		
		

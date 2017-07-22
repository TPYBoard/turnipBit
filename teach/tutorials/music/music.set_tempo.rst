**显示图像**
================================

**显示图像的说明**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

	[显示图像拼]的图例

	.. image:: images/display/display.show.png

	功能：在LED显示屏上面显示相应的图案，此拼必须配合图形块中的插使用。

	[显示图像拼]的动画

	.. image:: images/display/display.show.gif

**显示图像例程**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

激动的心
::::::::::::::::::

	动手DIY一颗跳动的心。

	拼插源码

	.. image:: images/display/display.shows.png

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
		
		

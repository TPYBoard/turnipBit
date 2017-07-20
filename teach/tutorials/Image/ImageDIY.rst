**创建图像**
======================

**创建图像的说明**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

	[创建图像插]的图例

	.. image:: images/Image/ImageDIY.png

	功能：可以按照使用者意愿创建显示图案，完成在板载LED显示屏上显示创建的图案,使用时需配合 `显示图像拼`_ 。

	.. _显示图像拼: http://docs.turnipbit.com/zh/latest/teach/tutorials/display/display.show.html

	[创建图像插]的动画

	.. image:: images/Image/ImageDIY.gif

**创建图像例程**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

闪烁的“木”字
::::::::::::::::::

	动手DIY一颗闪烁的“木”字。

	拼插源码

	.. image:: images/Image/imageDIYS.png

	实例源码::

		from microbit import *

			while True:
			display.show(Image("00900:99999:09990:90909:00900"))
			sleep(300)
			display.show(Image("00900:99999:09990:90909:00900").invert())
			sleep(300)


**小试牛刀**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>


		 `立即编程`_

		.. _立即编程: http://turnipbit.tpyboard.com/

		 `下载 ImageDIYS HEX`_

		.. _下载 ImageDIYS HEX: http://turnipbit.com/download.php?fn=ImageDIYS.hex
		
		

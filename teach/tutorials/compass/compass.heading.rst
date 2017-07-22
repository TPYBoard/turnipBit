**指南针的方向**
======================

**指南针的方向的说明**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

	[指南针的方向插]的图例

	.. image:: images/compass/compass.heading.png

	功能：用来获取当前指南针的角度，返回值为当前的相对角度。

	[指南针的方向插]的动画

	.. image:: images/compass/compass.headings.gif

**指南针的方向例程**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

自制指南针
::::::::::::::::::

	动手DIY制作一个指南针。此DIY需要使用指南针的方向插和 `显示图像拼`_ 和配合 `内置图像插`_ 配合完成。

	.. _显示图像拼: http://docs.turnipbit.com/zh/latest/teach/tutorials/display/display.show.html

	.. _内置图像插: http://docs.turnipbit.com/zh/latest/teach/tutorials/Image/Image.HEART.html


	拼插源码

	.. image:: images/TurnipBit/compass.headings.png

	实例源码::

		from microbit import *

		while True:
			if compass.heading() > 0 and compass.heading() <= 90:
				display.show(Image.ARROW_N)
			if compass.heading() > 90 and compass.heading() <= 180:
				display.show(Image.ARROW_E)
			if compass.heading() > 180 and compass.heading() <= 270:
				display.show(Image.ARROW_S)
			if compass.heading() > 270 and compass.heading() <= 360:
				display.show(Image.ARROW_W)

**小试牛刀**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>


		 `立即编程`_

		.. _立即编程: http://turnipbit.tpyboard.com/

		 `下载 compass.heading HEX`_

		.. _下载 compass.heading HEX: http://turnipbit.com/download.php?fn=compass.heading.hex
		
		

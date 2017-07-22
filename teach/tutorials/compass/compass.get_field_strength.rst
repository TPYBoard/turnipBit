**指南针磁场强度**
======================

**指南针磁场强度的说明**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

	[指南针磁场强度插]的图例

	.. image:: images/compass/compass.get_field_strength.png

	功能：用来获取当前的磁场强度，返回值为当前磁场强度。

	[指南针磁场强度插]的动画

	.. image:: images/compass/compass.get_field_strength.gif

**指南针磁场强度例程**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

DIY磁场检测仪
::::::::::::::::::

	动手DIY制作一个磁场检测仪。此DIY需要使用指南针的方向插和 `显示图像拼`_ 和配合 `创建图像插`_ 配合完成。

	.. _显示图像拼: http://docs.turnipbit.com/zh/latest/teach/tutorials/display/display.show.html

	.. _创建图像插: http://docs.turnipbit.com/zh/latest/teach/tutorials/Image/ImageDIY.html

	拼插源码

	.. image:: images/compass/compass.get_field_strengths.png

	实例源码::

		from microbit import *


		while True:
			if compass.get_field_strength() < 500000:
				display.show(Image("09990:90009:90009:90009:09990"))
			if compass.get_field_strength() > 500000:
				display.show(Image("90009:09090:00900:09090:90009"))


**小试牛刀**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>


		 `立即编程`_

		.. _立即编程: http://turnipbit.tpyboard.com/

		 `下载 compass.get_field_strengths HEX`_

		.. _下载 compass.get_field_strengths HEX: http://turnipbit.com/download.php?fn=compass.get_field_strengths.hex
		
		

按键块
=======================

**按键A被按下**
---------------------------

**按键A被按下的说明**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

	[按键A被按下插]的图例

	.. image:: images/button/button_a.is_pressed.png

	功能：用来判断按键A是否被按下，返回值为真或假，一般作为判断条件使用。

	[按键A被按下插]的动画

	.. image:: images/button/button_a.is_pressed.gif

**按键A被按下例程**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
	
**按键控制警示牌**
:::::::::::::::::::

		动手做一个裁判使用的警示牌，按键A按下的时候，显示“X”，未按下的时候显示“O”。

		拼插源码

		.. image:: images/display/button_a.is_pressed2.png

		实例源码::

			from microbit import *

			while False:
				if button_a.is_pressed():
					display.show(Image("90009:09090:00900:09090:90009"))
				if not button_a.is_pressed():
					display.show(Image("09990:90009:90009:90009:09990"))


**小试牛刀**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>


		 `立即编程`_

		.. _立即编程: http://turnipbit.tpyboard.com/

		 `下载 display.scroll HEX`_

		.. _下载 display.scroll HEX: http://turnipbit.com/download.php?fn=button_a.is_pressed.hex

**关闭屏幕**
---------------------------

**关闭屏幕的说明**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

	[关闭屏幕拼]的图例

	.. image:: images/button/button.off.png

	功能：打开板载LED显示屏。

	[关闭屏幕拼]的动画

	.. image:: images/button/button.off.gif

**显示是否打开**
---------------------------

**显示是否打开的说明**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

	[显示是否打开拼]的图例

	.. image:: images/button/button.is_on.png

	功能：判断板载LED显示屏是否打开，返回量为真或假，常作为判断条件使用。

	[显示是否打开拼]的动画

	.. image:: images/button/button.is_on.gif
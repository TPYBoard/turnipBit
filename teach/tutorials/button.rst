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

		.. image:: images/button/button_a.is_pressed1.png

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

**按键A曾经按下**
---------------------------

**按键A曾经按下的说明**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

	**[按键A曾经按下插]的图例**

	.. image:: images/button/button_a.was_presses.png

	功能：用来判断按键A是否曾经被按下，返回值为真或假，一般作为判断条件使用。

	[按键A曾经按下插]的动画

	.. image:: images/button/button_a.was_pressed.gif

**按键A按下的次数**
---------------------------

**按键A按下的次数的说明**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

	[按键A按下的次数插]的图例

	.. image:: images/button/button_a.get_presses.png

	功能：用来判断按键A是否曾经被按下，返回值为当前按键A按下的次数。

	[按键A按下的次数插]的动画

	.. image:: images/button/button_a.get_presses.gif
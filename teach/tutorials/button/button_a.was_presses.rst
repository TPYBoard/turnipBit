**按键A曾经按下**
==========================

**按键A曾经按下的说明**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

	[按键A曾经按下插]的图例

	.. image:: images/button/button_a.was_presses.png

	功能：用来判断按键A是否曾经被按下，返回值为真或假，一般作为判断条件使用。

	[按键A曾经按下插]的动画

	.. image:: images/button/button_a.was_pressed.gif


**按键A曾经按下例程**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

按键计数显示器
::::::::::::::::::

	动手DIY一个按键计数显示器。按键A按下一次，计数加一，即使按下按键A不放，计数仍然只加一。按下按键B，计数开始逐次加一，只到按键B松开。

	拼插源码

	.. image:: images/button/button_a.was_presseds.png

	实例源码::

		from microbit import *

		Y = 0
		while True:
			if button_a.was_pressed():
				Y = Y + 1
			if button_b.is_pressed():
				Y = Y + 1
			display.scroll((str(Y) + str('')))


**小试牛刀**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>


		 `立即编程`_

		.. _立即编程: http://turnipbit.tpyboard.com/

		 `下载 button_a.was_presseds HEX`_

		.. _下载 button_a.was_presseds HEX: http://turnipbit.com/download.php?fn=button_a.was_presseds.hex
		
		



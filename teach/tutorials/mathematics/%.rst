**显示图像（带参数）**
================================

**显示图像（带参数）的说明**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

	[显示图像（带参数）拼]的图例

	.. image:: images/display/display.show1.png

	功能：在LED显示屏上面显示相应的图案，此拼必须配合图形块中的插使用，此拼既可以完成显示图案，还可以设置图案的显示模式。
	
	参数：
		- 第一个参数为设置图案的显示时间。
		- 第二个参数为设置图案的显示模式，选中则每次都执行。
		- 第三个参数为设置图案的显示流程模式，选中则循环执行。
		- 第四个参数为清除显示，选中则在每次执行完毕后清除当前显示。

	[显示图像（带参数）拼]的动画

	.. image:: images/display/display.show1.gif

**显示图像（带参数）例程**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

滚动的方向板
::::::::::::::::::

	动手DIY一个滚动的方向板。

	拼插源码

	.. image:: images/display/display.show1s.png

	实例源码::

		from microbit import *

		while True:
			display.show(Image.ARROW_N, delay=200, wait=True, loop=False, clear=True)
			display.show(Image.ARROW_E, delay=200, wait=True, loop=False, clear=True)
			display.show(Image.ARROW_S, delay=200, wait=True, loop=False, clear=True)
			display.show(Image.ARROW_W, delay=200, wait=True, loop=False, clear=True)


**小试牛刀**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>


		 `立即编程`_

		.. _立即编程: http://turnipbit.tpyboard.com/

		 `下载 display.show1s HEX`_

		.. _下载 display.show1s HEX: http://turnipbit.com/download.php?fn=display.show1s.hex
		
		


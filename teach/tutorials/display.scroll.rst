显示块
================

**获取指定LED亮度**
---------------------------------------

**获取指定LED亮度说明**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

	[获取指定LED亮度插]的图例

	.. image:: images/display/display.get_pixel.png

	功能：获取指定位置的LED的当前亮度。

	参数：
		- 第一个参数为指定LED的X轴坐标，取值范围为0-4。
		- 第二个参数为指定LED的Y轴坐标，取值范围为0-4。

	[获取指定LED亮度拼]的动画

	.. image:: images/display/display.get_pixel.gif

**设置指定LED亮度**
---------------------------------------

**设置指定LED亮度的说明**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

	**[设置指定LED亮度拼]的图例**


	.. image:: images/display/display.set_pixel.png

	功能：设置指定位置的LED灯的亮度。

	参数：
		- 第一个参数为指定LED的X轴坐标，取值范围为0-4。
		- 第二个参数为指定LED的Y轴坐标，取值范围为0-4。
		- 第三个参数为设定LED的亮度值，取值范围为0-9。

	[设置指定LED亮度拼]的动画

	.. image:: images/display/display.set_pixel.gif

**设置指定LED亮度的例程**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

忽闪忽闪小蓝灯
::::::::::::::::::::::::::::::

	动手DIY一个忽闪忽闪的小灯。

	拼插源码

	.. image:: images/display/display.set_pixelh.png

	实例源码::

		from microbit import *

		while True:
		  display.set_pixel(0, 0, 9)
		  sleep(500)
		  display.set_pixel(0, 0, 0)
		  sleep(500)

**小试牛刀**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>


		 `立即编程`_

		.. _立即编程: http://turnipbit.tpyboard.com/

		 `下载 display.set_pixel HEX`_

		.. _下载 display.set_pixel HEX: http://turnipbit.com/download.php?fn=display.set_pixel.hex

**清除显示内容**
---------------------------

**清除显示内容的说明**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

	[清除显示内容拼]的图例

	.. image:: images/display/display.clear.png

	功能：清除当前LED显示屏上面的显示内容。

	[清除显示内容拼]的动画

	.. image:: images/display/display.clear.gif

**显示图像**
---------------------------

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

**显示图像（带参数）**
---------------------------

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

	[显示图像拼]的动画

	.. image:: images/display/display.show1.gif

**滚动消息**
----------------------------

**滚动消息说明**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
	
	[滚动消息拼]的图例

	.. image:: images/display/display.scroll.ex00.png

	使用[滚动消息拼]在TurnipBit显示屏上滚动显示的英文。

	[滚动消息拼]的动画

	.. image:: images/display/display.scroll.gif
	
	`查看原图`_
	
	.. _查看原图: http://docs.turnipbit.com/zh/latest/_images/display.scroll.gif



**滚动消息例程**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>
	
**电子名牌**
:::::::::::::::::::

		动手做一个挂在胸前的电子名牌。

		拼插源码

		.. image:: images/display/display.scroll.ex01.png

		实例源码::

			from microbit import *

			while True:
			  display.scroll('TurnipBit')

		视频抢先看

			想先看看实拍视频尝尝鲜？ `点击这里`_。

			.. _点击这里: https://v.qq.com/x/page/e0509rnqn5r.html

**小试牛刀**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>


		 `立即编程`_

		.. _立即编程: http://turnipbit.tpyboard.com/

		 `下载 display.scroll HEX`_

		.. _下载 display.scroll HEX: http://turnipbit.com/download.php?fn=display.scroll.hex

**打开屏幕**
---------------------------

**打开屏幕的说明**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

	[打开屏幕拼]的图例

	.. image:: images/display/display.on.png

	功能：打开板载LED显示屏。

	[打开屏幕拼]的动画

	.. image:: images/display/display.on.gif

**关闭屏幕**
---------------------------

**关闭屏幕的说明**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

	[关闭屏幕拼]的图例

	.. image:: images/display/display.off.png

	功能：打开板载LED显示屏。

	[关闭屏幕拼]的动画

	.. image:: images/display/display.off.gif
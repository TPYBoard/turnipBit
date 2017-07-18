显示块
================

**获取指定LED亮度**
---------------------------------------

**获取指定LED亮度说明**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

	[获取指定LED亮度拼]的图例

	.. image:: images/display/display.get_pixel.png

	使用[获取指定LED亮度拼]获取指定位置的LED的当前亮度，其中第一个参数为指定LED的X轴坐标，第二个参数为指定LED的Y轴坐标。其中两个参数的取值范围均为0-4。

	[获取指定LED亮度拼]的动画

	.. image:: images/display/display.get_pixel.gif

**设置指定LED亮度**
---------------------------------------

**设置指定LED亮度说明**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

	**[设置指定LED亮度拼]图例**


	.. image:: images/display/display.set_pixel.png

	使用[设置指定LED亮度拼]设置指定位置的LED灯的亮度，其中其中第一个参数为指定LED的X轴坐标，第二个参数为指定LED的Y轴坐标，第三个股参数为设定LED的亮度值。前两个参数的取值范围均为0-4，第三个参数的取值范围为0-9。

	[设置指定LED亮度拼]动画

	.. image:: images/display/display.set_pixel.gif

**设置指定LED亮度例程**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

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

		.. _下载 display.set_pixel HEX: http://pan.baidu.com/s/1qYDdBac


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

		 `下载HEX`_

		.. _下载HEX: http://pan.baidu.com/s/1eRWK98m

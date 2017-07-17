显示
================

**滚动消息**
----------------------------

	**滚动消息命令简介**

		.. image:: images/DUNDONNG2.png

		TurnipBit上面自带一个由高亮LED组成的显示屏，且TurnipBit中有专用的字符显示功能，可以随心所欲的显示想显示的英文字符。

	*滚动消息命令使用方法*

		.. image:: images/DUNDONNG.gif



	**滚动的名牌**


		做一个小程序，在TurnipBit自带的显示屏上滚动显示自己名字的拼音。

	*示例代码截图*

		.. image:: images/xxy.png

		MicroPython代码::
		
			from microbit import *
			
			while True:
			  display.scroll('XuXiangyu')


	**小试牛刀**


		 `立即编程`_.

		.. _立即编程: http://turnipbit.tpyboard.com/

		 `下载HEX`_.

		 _下载HEX: .. image:: images/XXY.hex
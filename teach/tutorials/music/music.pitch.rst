播放音调
================

**播放音调的说明**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

	[播放音调拼]的图例

	.. image:: images/music/music.pitch.png

	功能：播放指定音调的音乐。

	参数：
		- 第一个参数为指定播放音调。
		- 第二个参数为指定播放时间。

	[播放音调拼]的动画

	.. image:: images/music/music.pitch1.gif

**播放音调**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

DIY小乐器
::::::::::::::::::

	动手DIY制作一个小乐器。此DIY过程和原理实施和操作简单，使用代码编程即可完成摇摆TurnipBit控制音调输出。

	实例源码::

		import music
		from microbit import *

		while True:
			music.pitch(accelerometer.get_x(), accelerometer.get_y())

**小试牛刀**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>


		 `立即编程`_

		.. _立即编程: http://turnipbit.tpyboard.com/

		 `下载 musics HEX`_

		.. _下载 musics HEX: http://turnipbit.com/download.php?fn=musics.hex
		
		


**内置音乐**
================================

**内置音乐的说明**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

	[内置音乐插]的图例

	.. image:: images/music/music.play.png

	功能：清除当前LED显示屏上面的显示内容。

	[内置音乐插]的动画

	.. image:: images/music/music.play.gif

**内置音乐例程**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

自制MP3
::::::::::::::::::

	DIY制作一个自制MP3。按下按键A，曲目加一，按下按键B，曲目减一。

	拼插源码

	.. image:: images/music/music.plays.png

	实例源码::

		from microbit import *
		import music

		X = 2
		while True:
			if button_a.was_pressed():
				X = X + 1
			if button_b.was_pressed():
				X = X - 1
			if X == 0:
				music.play(music.DADADADUM, wait=True, loop=False)
			if X == 1:
				music.play(music.ODE, wait=True, loop=False)
			if X == 2:
				music.play(music.BIRTHDAY, wait=True, loop=False)
			if X == 3:
				music.play(music.WEDDING, wait=True, loop=False)


**小试牛刀**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>


		 `立即编程`_

		.. _立即编程: http://turnipbit.tpyboard.com/

		 `下载 music.plays HEX`_

		.. _下载 music.plays HEX: http://turnipbit.com/download.php?fn=music.plays.hex
		
		



**读取引脚数字电压**
================================

**读取引脚数字电压的说明**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

	[读取引脚数字电压插]的图例

	.. image:: images/pin/pin0.read_digital.png

	功能：读取引脚的数字电压，返回值为1或0。

	[读取引脚数字电压插]的动画

	.. image:: images/pin/pin0.read_digital.gif

外接按键小乐器
::::::::::::::::::

	动手DIY制作一个外接按键小乐器。利用外接按键，控制输出相应频率的声音输出，此例程需要配合 `播放音调拼`_ 配合完成。

	.. _设置指定LED亮度拼: http://docs.turnipbit.com/zh/latest/teach/tutorials/music/music.pitch.html

	拼插源码

	.. image:: images/pin/pin0.read_digitals.png

	实例源码::

		from microbit import *
		import music

		A = 0
		while True:
			if pin0.read_digital():
				sleep(100)
				if pin0.read_digital():
					music.pitch(200, 100)
			if pin0.read_digital():
				sleep(100)
				if pin0.read_digital():
					music.pitch(400, 100)
			if pin0.read_digital():
				sleep(100)
				if pin0.read_digital():
					music.pitch(600, 100)
			if pin0.read_digital():
				sleep(100)
				if pin0.read_digital():
					music.pitch(800, 100)

**小试牛刀**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>


		 `立即编程`_

		.. _立即编程: http://turnipbit.tpyboard.com/

		 `下载 pin0.read_digitals HEX`_

		.. _下载 pin0.read_digitals HEX: http://turnipbit.com/download.php?fn=pin0.read_digitals.hex
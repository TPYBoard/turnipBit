**接收消息**
================================

**接收消息的说明**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

	[接收消息插]的图例

	.. image:: images/radio/radio.receive.png

	功能：接收无线电消息，返回值为当前无线电接收到的消息。

	[接收消息插]的动画

	.. image:: images/radio/radio.receive.gif

**接收消息例程**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

自制消息收发器
::::::::::::::::::

	DIY制作一对消息收发器。一个循环发送0-9，另一个接收并显示接收到的消息。

	拼插源码(发送)

	.. image:: images/radio/radio.receives.png

	实例源码(发送)::

		import radio

		radio.on()
		X = 0
		while True:
			radio.send((str(X) + str('')))
			if X == 9:
				X = 0
			X = X + 1

拼插源码(接收)

	.. image:: images/radio/radio.receivesj.png

	实例源码(接收)::

		import radio
		from microbit import *

		radio.on()
		while True:
			display.scroll((radio.receive()))

**小试牛刀**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>


		 `立即编程`_

		.. _立即编程: http://turnipbit.tpyboard.com/

		 `下载 radio.receives HEX`_

		.. _下载 radio.receives HEX: http://turnipbit.com/download.php?fn=radio.receives.hex
		
				 `下载 radio.receivesj HEX`_

		.. _下载 radio.receivesj HEX: http://turnipbit.com/download.php?fn=radio.receivesj.hex
		
		



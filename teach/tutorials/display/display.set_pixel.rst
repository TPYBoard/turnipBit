��ʾ��
================

**����ָ��LED����**
---------------------------------------

**����ָ��LED���ȵ�˵��**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

	**[����ָ��LED����ƴ]��ͼ��**


	.. image:: images/display/display.set_pixel.png

	���ܣ�����ָ��λ�õ�LED�Ƶ����ȡ�

	������
		- ��һ������Ϊָ��LED��X�����꣬ȡֵ��ΧΪ0-4��
		- �ڶ�������Ϊָ��LED��Y�����꣬ȡֵ��ΧΪ0-4��
		- ����������Ϊ�趨LED������ֵ��ȡֵ��ΧΪ0-9��

	[����ָ��LED����ƴ]�Ķ���

	.. image:: images/display/display.set_pixel.gif

**����ָ��LED���ȵ�����**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>

��������С����
::::::::::::::::::::::::::::::

	����DIYһ������������С�ơ�

	ƴ��Դ��

	.. image:: images/display/display.set_pixelh.png

	ʵ��Դ��::

		from microbit import *

		while True:
		  display.set_pixel(0, 0, 9)
		  sleep(500)
		  display.set_pixel(0, 0, 0)
		  sleep(500)

**С��ţ��**
>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>


		 `�������`_

		.. _�������: http://turnipbit.tpyboard.com/

		 `���� display.set_pixel HEX`_

		.. _���� display.set_pixel HEX: http://turnipbit.com/download.php?fn=display.set_pixel.hex
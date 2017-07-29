from microbit import *
import random


display.show(Image("00000:00000:00000:00000:00000").invert())
X = 0
Y = 0
while True:
  sleep(300)
  if display.get_pixel(X, Y) != 0:
    display.set_pixel(X, Y, (display.get_pixel(X, Y) - 1))
  if display.get_pixel(X, Y) == 0:
    X = random.randint(0, 4)
    Y = random.randint(0, 4)

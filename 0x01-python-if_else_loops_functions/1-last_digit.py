#!/usr/bin/python3
import random
number = random.randint(-10000, 10000)
digit = abs(number) % 10
if number < 0:
    digit = -digit
    print(f"last digit of {number:d} is {digit:d} and is ", end="")
elif digit == 0:
    print("0")
else:
    print("less than 6 and not 0")

#!/usr/bin/python3
"""print the number from 1 to 100 seperated by space.
    for multiples of three, print fizz instead of the number
    for multiples of five, print Buzz instead of the number.
    for multiples of three and five, print FizzBuzz instead of the number.
"""


def fizzbuzz():
    for number in range(1, 101):
        if number % 3 == 0 and number % 5 == 0:
            print("FizzBuzz ", end="")
        elif number % 3 == 0:
            print("Fizz ", end="")
        elif number % 5 == 0:
            print("Buzz ", end="")
        else:
            print("{} ".format(number), end="")

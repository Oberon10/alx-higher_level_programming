#!/usr/bin/python3

# Author: Benard Prosper Echebiri
# Write a function that prints all integers of a list

def print_list_integer(my_list=[]):

    """This script prints all the integer in the list."""
    for integer in my_list:
        print("{:d}".format(integer))

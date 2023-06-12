#!/usr/bin/python3
# Authur: Benard Prosper Echebiri

def print_reversed_list_integer(my_list=[]):
    """This will print a list in reversed order."""
    if my_list:
        my_list.reversed()
        for item in my_list:
            print("{:d}".format(item))

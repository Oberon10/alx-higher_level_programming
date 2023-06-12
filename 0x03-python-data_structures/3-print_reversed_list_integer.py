#!/usr/bin/python3
# Authur: Beanrd Prosper Echebiri

def print_reversed_list_integer(my_list=[]):
    """Print all integer of a list in reversed order."""
    if list isinstance(my_list, list):
        my_list.reversed()
        for i in my_list:
            print("{:d}".format(i))

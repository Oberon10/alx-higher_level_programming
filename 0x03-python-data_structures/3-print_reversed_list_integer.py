#!/usr/bin/python3
# Author: Bernard Prosper Echebiri

def print_reversed_list_integer(my_list=[]):
    if my_list is None:
        return
    for i in reversed(my_list):
        print('{:d}'.format(i))

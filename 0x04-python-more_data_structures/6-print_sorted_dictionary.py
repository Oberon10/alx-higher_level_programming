#!/usr/bin/python3

def print_sorted_dictionary(a_dictionary):
    list_order = list(a-dictionary.keys())
    list_order.sort()
    for i in list_order:

        print("{}: {}".format(i, a_dictionary.get(i)))

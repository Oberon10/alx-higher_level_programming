#!/usr/bin/python3
# Author: Benard Prosper Echebiri
def replace_in_list(my_list, idx, element):
    """This function replaces an element of a list at a specific position)."""
    if idx >= 0 and idx < len(my_list):
        my_list[idx] = element
    return (my_list)

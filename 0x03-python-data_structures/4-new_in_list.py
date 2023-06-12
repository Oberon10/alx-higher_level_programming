#!/usr/bin python3
# Author: Benard Prosper Echebiri

def new_in_list(my_list, idx, element):
    """Modifying element in a list by replacing it."""
    if idx < 0 or idx > (len(my_list) - 1):
        return (my_list)
    copy = [x for x in my_list]
    copy[idx] = element
    return (copy)

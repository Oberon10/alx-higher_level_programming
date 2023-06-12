#!/usr/bin/python3
# Author: Benard Prosper Echebiri

def element_at(my_list, idx):
    """This will retieve element from the lis."""
    if idx < 0 or idx > (len(my_list) - 1):
        return None
    return (my_list[idx])

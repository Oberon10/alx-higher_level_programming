#!/usr/bin/python3
# Authur : Benard Prosper Echebiri

def element_at(my_list, idx):
    """This will retrieve element from a list."""
    if idx < 0 or idx > (len(my_list) - 1):
        return None
    return (my_list[idx])

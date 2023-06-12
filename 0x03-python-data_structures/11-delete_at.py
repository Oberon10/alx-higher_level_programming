#!/usr/bin/python3
# Author: Benard Propser Echebiri

def delete_at(my_list=[], idx=0):
    if 0 <= idx < len(my_list):
        del(my_list[idx])
    return(my_list)

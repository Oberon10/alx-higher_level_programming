#!/usr/bin/python3
# Author: Benard Prosper Echebiri

def print_matrix_integer(matrix=[[]]):
    for i in matrix:
        print(''.join('{:d}'.format(j) for j in i))

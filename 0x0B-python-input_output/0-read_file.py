#!/usr/bin/python3
"""
Function to read a text file (UTF8) and print it to stdout.
"""

def read_file(filename=""):
    """Read and print the contents of a text file to stdout."""
    with open(filename, encoding='utf-8') as file:
        print(file.read(), end='')


if __name__ == "__main__":
    read_file("my_file_0.txt")

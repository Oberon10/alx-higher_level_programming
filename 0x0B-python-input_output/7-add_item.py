#!/usr/bin/python3
"""
Script to add arguments to a list and save it to a JSON file.
"""

import sys
import json
from typing import List
from os import path


def save_to_json_file(my_obj, filename):
    """Save object to a JSON file."""
    with open(filename, 'w') as file:
        json.dump(my_obj, file)


def load_from_json_file(filename):
    """Load object from a JSON file."""
    with open(filename, 'r') as file:
        return json.load(file)


def add_items_to_list(filename: str, items: List[str]):
    """Add items to a list and save it to a JSON file."""
    if path.exists(filename):
        my_list = load_from_json_file(filename)
    else:
        my_list = []
   
    my_list.extend(items)
    save_to_json_file(my_list, filename)


if __name__ == "__main__":
    args = sys.argv[1:]
    add_items_to_list("add_item.json", args)

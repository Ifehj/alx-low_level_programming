#!/usr/bin/python3
""" contains the MyList Class """


class MyList(list):

    def __init__(self):
        super().__init__()

    def print_sorted(self):
        print(sorted(self))

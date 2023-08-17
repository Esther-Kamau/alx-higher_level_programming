#!/usr/bin/python3

import sys

if __name__ == "__main__":
    argv = sys.argv[1:]
    argc = len(argv)

    print(f"{argc} {'argument' if argc == 1 else 'arguments'}.")
    for i, arg in enumerate(argv):
        print(f"{i+1}: {arg}")

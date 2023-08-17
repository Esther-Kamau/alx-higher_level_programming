#!/usr/bin/python3

for number in range(10):
    for second_digit in range(number + 1, 10):
        if number == second_digit:
            continue
        print("{:d}{:d}".format(number, second_digit), end=', ')

print()

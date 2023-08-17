#!/usr/bin/python3
"""Performs mathematical operations using functions from calculator_1 module"""

import calculator_1

if __name__ == "__main__":
    a = 10
    b = 5

    add_result = calculator_1.add(a, b)
    sub_result = calculator_1.sub(a, b)
    mul_result = calculator_1.mul(a, b)
    div_result = calculator_1.div(a, b)

    print("{:d} + {:d} = {:d}".format(a, b, add_result))
    print("{:d} - {:d} = {:d}".format(a, b, sub_result))
    print("{:d} * {:d} = {:d}".format(a, b, mul_result))
    print("{:d} / {:d} = {:d}".format(a, b, div_result))

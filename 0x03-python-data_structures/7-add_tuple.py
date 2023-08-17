#!/usr/bin/python3

def add_tuple(tuple_a=(), tuple_b=()):
    # Create new tuples with default values (0) for missing elements
    a = tuple_a + (0, 0)
    b = tuple_b + (0, 0)
    
    # Perform element-wise addition
    sum_tuple = (a[0] + b[0], a[1] + b[1])
    
    return sum_tuple

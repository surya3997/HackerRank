#!/bin/python3

import sys


n = int(input().strip())
calories = list(map(int, input().strip().split(' ')))
# your code goes here

cals = sorted(calories, reverse = True)

initial = 0

for index, item in enumerate(cals):
    initial += (item * (2 ** index))
    
print(initial)

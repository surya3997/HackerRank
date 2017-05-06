#!/bin/python

import sys


a,b,c,d,e = input().strip().split(' ')
a,b,c,d,e = [int(a),int(b),int(c),int(d),int(e)]

total = a + b + c + d + e

print(str(total - max(a, b, c, d, e)) + " " + str(total - min(a, b, c, d, e)))

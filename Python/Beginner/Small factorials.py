# -*- coding: utf-8 -*-
"""
Created on Mon May 13 15:57:28 2019

@author: muin
"""

#https://www.codechef.com/problems/FCTRL2

import math

t = int(input())

out = []

for i in range(t):
    inp = int(input())
    out.insert(i, math.factorial(inp))

print('\n'.join(map(str, out)))
    
    
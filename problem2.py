#!/usr/bin/env python
sum = 0
fib = 2
fibPrev = 1
fibTemp = 0
while fib < 4000000:
	if fib % 2 == 0:
		sum += fib
	fibPrev, fib = fib, fib + fibPrev
print sum
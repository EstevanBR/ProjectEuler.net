#!usr/bin/env python
n = 600851475143.0
while n % 2 == 0:
	print 2
	n = n / 2
for i in xrange(3,int(n**.5)):
	while n % i == 0:
		print i
		n = n / i
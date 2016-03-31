#!usr/bin/env python
n = 0
while (n < 1000):
	n = n+1
	#print(n)
	for x in xrange(1,21):
		#print(x)
		if (n % x == 0):
			continue
		else:
			break
	print (n)
	pass

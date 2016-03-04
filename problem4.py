#!usr/bin/env python
	# https://projecteuler.net/problem=5
	# Largest palindrome product
	# Problem 4
	# A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 x 99.

	# Find the largest palindrome made from the product of two 3-digit numbers.
def isPalindrome (numberToTest):
	string = str(numberToTest)
	length = len(string)-1
	x = 0 
	for x in xrange(length+1):
		if string[x] != string[length-x]:
			break
	return x == length

x = 0
maximum = 0
for x in xrange(1,999):
	for y in xrange(1,999):
		number = x * y
		if isPalindrome(number):
			if x * y > maximum:
				maximum = x * y
				print str(number) + " from " + str(x) + " * " + str(y)





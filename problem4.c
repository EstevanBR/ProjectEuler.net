/*
	https://projecteuler.net/problem=5
	Largest palindrome product
	Problem 4
	A palindromic number reads the same both ways. The largest palindrome made from the product of two 2-digit numbers is 9009 = 91 × 99.

	Find the largest palindrome made from the product of two 3-digit numbers.
*/
#include <stdio.h>
#include <string.h>
#include "palindrome.h"
int main(int argc, char const *argv[])
{
	char number[7];
	int i;
	int max = 0;
	for (i = 0; i < 999; i++) {
		int j;
		for (j = 0; j < 999; j++) {
			sprintf(number,"%d", i * j);
			if (isPalindrome(number)) {
				if (i*j > max) {
					max = i * j;
					printf("%s from %d * %d\n", number, i, j);
				}
			}
		}
	}
	return 0;
}
/*
	https://projecteuler.net/problem=5
	Smallest multiple
	Problem 5
	2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.

	What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?


	Answer:
	232792560
	Completed on Mon, 29 Feb 2016, 09:40

*/

#include <stdio.h>
#include <limits.h>
int main(int argc, char const *argv[]) {
	for (int i = 2520; i < INT_MAX; i++) {
		int mods = 0;
		for (int j = 1; j <= 20; j++) {
			if (i % j == 0) {
				mods++;
			}
		}
		if (mods == 20) {
			printf("%d mods: %d\n", i, mods);
			return 1;
		}
	}
	return 0;
}
/*
	https://projecteuler.net/problem=3
	The prime factors of 13195 are 5, 7, 13 and 29.
	What is the largest prime factor of the number 600851475143 ?
*/

#include <stdio.h>
#include <math.h>

int main(int argc, char const *argv[])
{
	/* code */
	long n = 600851475143;
	long square_of_n = (long) sqrt(n);
	printf ("%lu\n", square_of_n);
	while(n % 2 == 0) {
		printf("2 ");
		n /= 2;
	}
	for (long i = 3; i < square_of_n; i++) {
		while (n % i == 0) {
			printf("%lu ", i);
			n /= i;
		}
	}
	return 0;
}
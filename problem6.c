/*problem6.c
Sum square difference
Problem 6
The sum of the squares of the first ten natural numbers is,

12 + 22 + ... + 102 = 385
The square of the sum of the first ten natural numbers is,

(1 + 2 + ... + 10)2 = 552 = 3025
Hence the difference between the sum of the squares of the first ten natural numbers and the square of the sum is 3025 − 385 = 2640.

Find the difference between the sum of the squares of the first one hundred natural numbers and the square of the sum.*/
#include <stdio.h>
int main(int argc, char const *argv[])
{
	int squaresum;
	int sum;
	for (int i = 0; i <= 100; i++) {
		squaresum += i * i;
		sum += i;
	}
	printf("square - sum^2 = %d\n", (sum * sum) - squaresum);
	return 0;
}
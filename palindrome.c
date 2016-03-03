#include <stdio.h>
#include <string.h>
int isPalindrome(const char *numberToTest) {
	int length = strlen(numberToTest)-1;
	int i;
	for (i = 0; i < length ; i++) {
		if (numberToTest[i] != numberToTest[length-i]) {
			break;
		}
	}
	return (i == length) ? 1 : 0;
}
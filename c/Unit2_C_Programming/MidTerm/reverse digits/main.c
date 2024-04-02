/*
 * main.c
 *
 *  Created on: Apr 2, 2024
 *      Author: Abdelaziz Amr
 */
#include <stdio.h>

int reverseNumber(int num) {
	int reversed = 0;

	while (num != 0) {
		int digit = num % 10;
		reversed = reversed * 10 + digit;
		num /= 10;
	}

	return reversed;
}

int main() {
	int number;
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stdin, NULL, _IONBF, 0);
	printf("Enter a number: ");
	scanf("%d", &number);
	int reversedNumber = reverseNumber(number);
	printf("Reversed number: %d\n", reversedNumber);

	return 0;
}


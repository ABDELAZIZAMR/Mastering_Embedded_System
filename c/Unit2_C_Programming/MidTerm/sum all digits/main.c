/*
 * main.c
 *
 *  Created on: Apr 2, 2024
 *      Author: Abdelaziz Amr
 */

#include <stdio.h>
int sumOfDigits(int num) {
	int sum = 0;
	while (num != 0) {
		int lastDigit = num % 10;
		sum += lastDigit;
		num /= 10;
	}

	return sum;
}

int main() {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stdin, NULL, _IONBF, 0);
	int inputNumber;
	printf("Enter an integer: ");
	scanf("%d", &inputNumber);
	int result = sumOfDigits(inputNumber);
	printf("Sum of all digits of %d is %d.\n", inputNumber, result);

	return 0;
}

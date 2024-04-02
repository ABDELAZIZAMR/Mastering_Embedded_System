/*
 * main.c
 *
 *  Created on: Apr 2, 2024
 *      Author: Abdelaziz Amr
 */

#include <stdio.h>
#include <math.h>

int main() {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stdin, NULL, _IONBF, 0);
	double number, squareRoot;
	printf("Enter a number: ");
	scanf("%lf", &number);
	squareRoot = sqrt(number);

	printf("Square root of %.2lf = %.2lf\n", number, squareRoot);
	return 0;
}

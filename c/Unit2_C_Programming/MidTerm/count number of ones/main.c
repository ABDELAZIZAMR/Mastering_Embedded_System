/*
 * main.c
 *
 *  Created on: Apr 2, 2024
 *      Author: Abdelaziz Amr
 */

#include <stdio.h>

void count1s(int N) {
	int count1 = 0;
	while (N > 0) {
		if (N & 1) {
			count1++;
		}
		N = N >> 1;
	}
	printf("output: %d\n", count1);
}

int main() {
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stdin, NULL, _IONBF, 0);
	int number;
	printf("input: ");
	scanf("%d", &number);
	count1s(number);
	return 0;
}


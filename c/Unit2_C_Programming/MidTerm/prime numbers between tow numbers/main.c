/*
 * main.c
 *
 *  Created on: Apr 2, 2024
 *      Author: Abdelaziz Amr
 */

/*
 * main.c
 *
 *  Created on: Mar 24, 2024
 *      Author: Abdelaziz Amr
 */

#include <stdio.h>
int check_prime(int c) {
	if (c <= 1) {
		return 0;
	}
	for (int x = 2; x * x <= c; x++) {
		if (c % x == 0) {
			return 0;
		}
	}
	return 1;

}

void find_numbers(int a, int b) {
	for (int i = a; i < b; i++) {
		if (check_prime(i)) {
			printf("%d ", i);
		}

	}
}
int main() {
	int n1, n2;
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stdin, NULL, _IONBF, 0);
	printf("N1: ");
	scanf("%d", &n1);
	printf("N2: ");
	scanf("%d", &n2);
	find_numbers(n1, n2);
}

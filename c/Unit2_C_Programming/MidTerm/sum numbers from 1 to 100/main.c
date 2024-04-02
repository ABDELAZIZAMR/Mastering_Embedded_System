/*
 * main.c
 *
 *  Created on: Apr 2, 2024
 *      Author: Abdelaziz Amr
 */


#include <stdio.h>

int sumNumbers(int n) {
    return n * (n + 1) / 2;
}

int main() {
    int sum = sumNumbers(100);

    printf("The sum of numbers from 1 to 100 is: %d\n", sum);

    return 0;
}


/*
 * main.c
 *
 *  Created on: Apr 2, 2024
 *      Author: Abdelaziz Amr
 */

#include <stdio.h>

int findUnique(int arr[], int size) {
    int unique = 0;

    for (int i = 0; i < size; i++) {
        unique ^= arr[i];
    }

    return unique;
}

int main() {
    int arr[] = {2, 4, 6,1,8,8, 4, 6, 2};
    int size = sizeof(arr) / sizeof(arr[0]);
    int unique = findUnique(arr, size);
    printf("The unique number in the array is: %d\n", unique);

    return 0;
}

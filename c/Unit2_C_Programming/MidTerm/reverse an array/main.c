/*
 * main.c
 *
 *  Created on: Apr 2, 2024
 *      Author: Abdelaziz Amr
 */


#include<stdio.h>
void reveres(int arr[], int start, int num) {
	while (start < num) {

		int temp = arr[start];
		arr[start] = arr[num];
		arr[num] = temp;
		start++;
		num--;

	}
}
int main() {
	int arr[100];
	int n;
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stdin, NULL, _IONBF, 0);
	printf("Enter no of-elements : ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		scanf("%d", &arr[i]);
	}
	for (int i = 0; i < n; i++) {
		printf("%d", arr[i]);
	}
	printf("\n");

	reveres(arr, 0, n - 1);
	printf("output after reveres is: ");
	for (int i = 0; i < n; i++) {
		printf("%d", arr[i]);

	}
	printf("\n");

	return 0;
}

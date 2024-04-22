/*
 * Q4.c
 *
 *  Created on: Apr 21, 2024
 *      Author: Abdelaziz Amr
 */
#include"stdio.h"
int main(){

	int i;
	int arr[15];
	int* parr;

	printf("input number of elements to store in the array: ");
	fflush(stdin);fflush(stdout);
	scanf("%d",&i);
	parr=arr;

	printf("input %d number of elements in the array: \n",i);
	for(int a=0;a<i;a++){
		printf("element -%d: ",a+1);
		fflush(stdin);fflush(stdout);
		scanf("%d",parr);

		parr++;
	}

	parr=&arr[i]-1;

	printf("\n");
	printf("The element of array in reverse order are: \n");

	for(int a=i;a>0;a--){
		printf("\nelement - %d: %d",a,*parr);
		parr--;
	}
	return 0;
}


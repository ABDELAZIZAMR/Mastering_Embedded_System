
/*
 * main.c
 *
 *  Created on: Jul 28, 2022
 *      Author: Abdelaziz Amr
 */
#include"stdio.h"
void main()
{
	float num;
	printf("Enter a number: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&num);
	if(num == 0){
		printf("you entered zero ",num);
	}
	else if(num > 0){
			printf("%.2f is positive",num);
		}
	else if(num<0){
			printf(" %.2f is negative",num);
		}
}

/*
 * main.c
 *
 *  Created on: Jul 28, 2022
 *      Author: Abdelaziz Amr
 */
#include"stdio.h"
void main()
{
	float num1,num2,num3;
	printf("Enter three numbers: ");
	fflush(stdin);
	fflush(stdout);
	scanf("%f",&num1);
	scanf("%f",&num2);
	scanf("%f",&num3);
	if(num1>num2 && num1 >num3){
		printf("Largest number = %f",num1);
	}
	else if(num2>num1 && num2 >num3){
			printf("Largest number = %f",num2);
		}
	else if(num3>num1 && num3 >num2){
			printf("Largest number = %f",num3);
		}
}

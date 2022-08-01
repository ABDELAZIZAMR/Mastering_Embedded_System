/*
 * main.c
 *
 *  Created on: Jul 26, 2022
 *      Author: Abdelaziz Amr
 */
#include"stdio.h"
int main()
{
	float a ,b,multiply;
	printf("##########Console-output###\n");
	printf("Enter two numbers: ");
	fflush(stdout);
	fflush(stdin);
	scanf("%f",&a);
	scanf("%f",&b);
	multiply=a*b;
	printf("product:%f \n",multiply);
	printf("###########################");

}

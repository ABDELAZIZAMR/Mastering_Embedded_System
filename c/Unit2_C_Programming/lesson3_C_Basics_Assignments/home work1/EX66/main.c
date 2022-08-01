/*
 * main.c
 *
 *  Created on: Jul 26, 2022
 *      Author: Abdelaziz Amr
 */

#include "stdio.h"
int main()
{
	printf("#########Console_output######\n");
		float a,b,temp;
		printf("Enter value of a : ");
		fflush(stdin); fflush(stdout);
		scanf("%f",&a);
		printf("Enter value of b : ");
		fflush(stdin); fflush(stdout);
		scanf("%f",&b);
		temp=a;
		a=b;
		b=temp;
		printf("After swapping, value of a = %f \n",a);
		printf("After swapping, value of b = %f \n",b);
		printf("#############################");
}

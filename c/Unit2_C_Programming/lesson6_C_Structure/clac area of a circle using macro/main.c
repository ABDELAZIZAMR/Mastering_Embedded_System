/*
 * main.c
 *
 *  Created on: Apr 17, 2024
 *      Author: Abdelaziz Amr
 */
#include <stdio.h>
#include <stdlib.h>

#define area(radius) (3.14*radius*radius)
int main(void)
{

	float radius;
	printf("Enter the radius: ");
	fflush(stdin);fflush(stdout);
	scanf("%f",&radius);
	printf("Area = %.2f",area(radius));
	return 0;
}

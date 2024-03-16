/*
 * main.c
 *
 *  Created on: Mar 16, 2024
 *      Author: Abdelaziz Amr
 */


#include <stdio.h>
int main(){
	float a,b;
	printf("Enter value of a : ");
	fflush(stdout); fflush(stdin);
	scanf("%f",&a);
	printf("Enter value of b : ");
		fflush(stdout); fflush(stdin);
		scanf("%f",&b);
	a+=b;
	b=a-b;
	a-=b;
	printf("After Swappin, value of a : %0.2f \n",a);
	printf("After Swappin, value of b : %0.2f \n",b);

}

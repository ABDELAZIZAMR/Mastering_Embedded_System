/*
 * main.c
 *
 *  Created on: Jul 30, 2022
 *      Author: Abdelaziz Amr
 */
#include"stdio.h"
void main(){
	float a,b,result;
	char c;
	printf("Enter operator either + or - or * or / :  ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&c);
	printf("Enter tow operands:");
	fflush(stdin); fflush(stdout);
	scanf("%f %f",&a,&b);

	switch (c){
	case  '-':
	{
		result = a-b;
	    printf("%.2f - %.2f = %.2f",a,b,result);
	}
	break;
	case  '+':
	{
		result = a+b;
		printf("%.2f + %.2f = %.2f",a,b,result);
	}
	break;
	case  '*':
	{
				result = a*b;
		printf("%.2f * %.2f = %.2f",a,b,result);
	}
	break;
	case  '/':
	{
				result = a/b;
		printf("%.2f / %.2f = %.2f",a,b,result);
	}
	break;

	}
}

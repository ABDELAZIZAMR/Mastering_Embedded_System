/*
 * main.c
 *
 *  Created on: Mar 24, 2024
 *      Author: Abdelaziz Amr
 */
#include<stdio.h>
int power_number(int base, int power){
	if(base == 0){
		return 0;
	}
	if (power <= 0){
		return 1;
	}
	return base * power_number(base,power-1);
}
int main(){
	int base,power;
	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stdin ,NULL,_IONBF,0);
	printf("Enter a base number: ");
	scanf("%d",&base);
	printf("Enter a power number(positive integer): ");
	scanf("%d",&power);
	int result=power_number(base,power);
	printf("%d ^ %d = %d",base,power,result);
	return 0;
}



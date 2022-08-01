/*
 * main.c
 *
 *  Created on: Jul 27, 2022
 *      Author: Abdelaziz Amr
 */
#include"stdio.h"
void main(){
	int num;
	printf(" Enter an integer you want to check:");
	fflush(stdin);fflush(stdout);
	scanf("%d",&num);
	if(num%2){
		printf("%d is even ",num );
	}
	else{
		printf("%d is odd ",num);
	}


}


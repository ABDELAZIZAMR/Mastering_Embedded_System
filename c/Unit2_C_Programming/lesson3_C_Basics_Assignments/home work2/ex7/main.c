/*
 * main.c
 *
 *  Created on: Jul 28, 2022
 *      Author: Abdelaziz Amr
 */
#include"stdio.h"
void main(){
	int a,b=1;
	printf("Enter an integer :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&a);
	if(a>0){
	for (int i = 1; i<= a; i++){
		b*=i;
		}
	printf("%d\n",b);
    }
	else{
		printf("Error!!! Factorial of negative number dosen't exist");
	}
}

/*
 * main.c
 *
 *  Created on: Jul 28, 2022
 *      Author: Abdelaziz Amr
 */
#include"stdio.h"
void main(){
	int a,b=0;
	printf("Enter an integer :");
	fflush(stdin);fflush(stdout);
	scanf("%d",&a);
	for (int i = 0; i<= a; i++){
		b+=i;

}
	printf("%d\n",b);
}

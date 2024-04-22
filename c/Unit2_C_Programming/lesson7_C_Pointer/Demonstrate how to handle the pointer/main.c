/*
 * main.c
 *
 *  Created on: Apr 21, 2024
 *      Author: Abdelaziz Amr
 */

#include "stdio.h"
int main(){
    unsigned int m = 29;
    int* ab;
    ab=&m;
    printf("Address of m : %x \nValue of m = %d\n",&m,m);
    printf("\nNow ab is assigned with te address of m.\n");
	printf("Address of pointer ab : %x \nContent of pointr = %d\n",ab,*ab);
	printf("\nThe value of m assigned to 34 now.");
    m=34;
	printf("\nAddress of pointer ab : %x \nContent of pointr = %d\n",ab,*ab);
	printf("\nThe pointer variable ab is assigned with the value 7 now.");
	*ab=7;
	printf("\nAddress of m : %x \nValue of m = %d\n",&m,m);
	return 0;
}


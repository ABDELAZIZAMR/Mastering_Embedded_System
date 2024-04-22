/*
 * main.c
 *
 *  Created on: Apr 21, 2024
 *      Author: Abdelaziz Amr
 */
#include"stdio.h"
int main()
{
	int a=0x41;
	char* P_Alpha;
	P_Alpha=&a;
	for( a =0x41; a<=0X5A ; a++){
		printf("%c ",*P_Alpha);
	}

}


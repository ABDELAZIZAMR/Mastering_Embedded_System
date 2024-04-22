/*
 * main.c
 *
 *  Created on: Apr 21, 2024
 *      Author: Abdelaziz Amr
 */
#include"stdio.h"
#include "string.h"
int main()
{
	int i;
	char String[50];
	char* ptr;
	printf("Input a string: ");
	fflush(stdout);	fflush(stdin);
	gets(String);
	ptr=&String[strlen(String)-1];
	printf("\nReverse of the string is: ");
	for(i=0;i<strlen(String);i++){
		printf("%c",*ptr);
		ptr--;
	}

return 0;
}

/*
 * main.c
 *
 *  Created on: Jul 28, 2022
 *      Author: Abdelaziz Amr
 */
#include"stdio.h"
void main()
{
	char alpha;
	printf("Enter a character: ");
	fflush(stdin);fflush(stdout);
	scanf("%c",&alpha);
	if((alpha >= 'a' && alpha <= 'z')||( alpha >='A' && alpha <= 'Z'))

		printf("%c is an alphabet",alpha);

	else

		printf("%c is not alphabet",alpha);

}


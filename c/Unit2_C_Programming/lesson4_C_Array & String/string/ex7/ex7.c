/*
 * ex7.c
 *
 *  Created on: Aug 15, 2022
 *      Author: Abdelaziz amr
 */
#include <stdio.h>
int main(){
	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);
	char str[100];
	int i,cou=0;
	printf("Enter a string: ");
	gets(str);
	for(i=0;str[i]!='\0';++i){
		++cou;
	}
	printf("Length of string: %d",cou);
}


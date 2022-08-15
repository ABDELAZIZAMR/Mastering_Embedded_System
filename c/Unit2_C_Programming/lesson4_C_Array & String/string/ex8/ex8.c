/*
 * ex8.c
 *
 *  Created on: Aug 15, 2022
 *      Author: Abdelaziz amr
 */
#include<stdio.h>
#include<string.h>
int main(){
	setvbuf(stdout,NULL,_IONBF,0);
		setvbuf(stderr,NULL,_IONBF,0);
		char str[100],r;
		int i,cou=0;
		printf("Enter a string: ");
		gets(str);
        i=0;
        cou=strlen(str)-1;
        while(i<cou){
        	r=str[i];
        	str[i]=str[cou];
        	str[cou]=r;
        	i++;
        	cou--;

		}
        printf("\nRevers string is: %s",str);
		}




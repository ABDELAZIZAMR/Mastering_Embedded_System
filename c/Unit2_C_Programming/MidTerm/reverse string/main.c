/*
 * main.c
 *
 *  Created on: Apr 2, 2024
 *      Author: Abdelaziz Amr
 */

#include<stdio.h>
#include<string.h>
int main(){
	setvbuf(stdout, NULL, _IONBF, 0);
    setvbuf(stdin, NULL, _IONBF, 0);
	char st[100],temp;
	int c,a=0;
	printf("Enter a string: ");
	gets(st);
	a=strlen(st)-1;
	c=0;
	while(c<a){
		temp=st[c];
		st[c]=st[a];
		st[a]=temp;
				c++;
		a--;
	}
	printf("length of string is :%s \n",st);

}

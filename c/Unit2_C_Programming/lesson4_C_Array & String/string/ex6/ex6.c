/*
 * ex6.c
 *
 *  Created on: Aug 15, 2022
 *      Author: Abdelaziz Amr
 */
#include<stdio.h>
int main(){
	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);
char text[100] , e;
int i,count=0;
printf("Enter a string: ");
gets(text);
printf("Enter a Character to find frequency: ");
scanf("%c",&e);
for(i=0;text[i]!='\0' ; ++i){
if(e==text[i])
	++count;
}
printf("frequency of %c = %d",e,count);

}


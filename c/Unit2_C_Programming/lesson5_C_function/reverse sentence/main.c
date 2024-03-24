/*
 * main.c
 *
 *  Created on: Mar 24, 2024
 *      Author: Abdelaziz Amr
 */
#include<stdio.h>
#include<string.h>
void Reverse_sent(char sentence[],int start,int end){
	if(start>=end){
		return;
	}
	char temp=sentence[start];
	sentence[start]=sentence[end];
	sentence[end]=temp;
	Reverse_sent(sentence,start + 1,end - 1);
}
int main(){
	char sentence[100];
	int len;
	printf("Enter a sentence : ");
	setvbuf(stdout,NULL, _IONBF,0);
	setvbuf(stdin ,NULL, _IONBF,0);
	gets(sentence);
	len=strlen(sentence);
    Reverse_sent(sentence,0,len - 1);
    printf("%s",sentence);
return 0;
}


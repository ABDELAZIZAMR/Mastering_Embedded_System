/*
 * ex5.c
 *
 *  Created on: Aug 15, 2022
 *      Author: Abdelaziz amr
 */

#include<stdio.h>
int main(){
	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);
	int a[100],b,e,i;
	printf("Enter no of elements: ");
	scanf("%d",&b);
	for(i=0;i<b;i++){
		scanf("%d",&a[i]);
	}
    printf("Enter the elements to be searched: ");
    scanf("%d",&e);
    for(i=0;i<b;i++){
    	if(a[i]==e){
    		printf("number found at location\r\t%d",i+1);
    	}
    }

}

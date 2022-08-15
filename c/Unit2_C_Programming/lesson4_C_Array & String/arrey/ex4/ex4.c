/*
 * ex4.c
 *
 *  Created on: Aug 14, 2022
 *      Author: Abdelaziz Amr
 */
#include<stdio.h>
int main(){
	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);
	int a[100],b,l,e,i;
	printf("Enter no of elements: ");
	scanf("%d",&b);
	for(i=0;i<b;i++){
		scanf("%d",&a[i]);
	}
    printf("Enter the elements to be inserted: ");
    scanf("%d",&e);
    printf("\nEnter the location: ");
    scanf("%d",&l);
        for(i=b;i>=l;i--){
       a[i]=a[i-1];
        }
       b++;
       a[l-1]=e;
       	for( i=0; i<b;i++){
        		printf("%d\t",a[i]);
       }
}


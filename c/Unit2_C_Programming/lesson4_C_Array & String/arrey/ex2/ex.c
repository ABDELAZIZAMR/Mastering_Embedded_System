/*
 * ex2.c
 *
 *  Created on: Aug 8, 2022
 *      Author: Abdelaziz amr
 */
#include<stdio.h>
int main()
{
	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);
float a[100] ,aveg,x=0.0;
int c ,i,r;
printf("Enter the numbers of data: ");
scanf("%d",&c);
for(i=1;i<=c;i++){
	printf("%d.Enter number: " ,i);
	scanf("%f",&a[r]);
x+=a[r];
	}
aveg=x/c;
printf("Average = %0.2f ",aveg);
}

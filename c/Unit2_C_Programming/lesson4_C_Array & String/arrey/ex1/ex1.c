/*
 * main.c
 *
 *  Created on: Aug 8, 2022
 *      Author: Abdelaziz amr
 */
#include<stdio.h>
int main()
{
	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);

float arr1[2][2];
float arr2[2][2];
float x[2][2];
int r,c;
printf("Enter the elements of 1st matrix \r\n ");
for(r=0;r<2;++r)
	for(c=0;c<2;++c){
		printf("Enter a[%d][%d] ",r+1,c+1);
		scanf("%f",&arr1[r][c]);
	}

printf("Enter the elements of 2st matrix \r\n");
for(r=0;r<2;++r)
	for(c=0;c<2;++c){
		printf("Enter b [%d][%d] ",r+1,c+1);
		scanf("%f",&arr2[r][c]);
	}

for(r=0;r<2;++r)
	for(c=0;c<2;++c){
		x[r][c]=arr1[r][c]+arr2[r][c];
	}
		printf("\nsum of matrix:\n");
for(r=0;r<2;++r)
	for(c=0;c<2;++c){
		printf("%0.1f\t",x[r][c]);
		if (c==1)
			printf("\n");
	}

return 0;
}

/*
 * ex3.c
 *
 *  Created on: Aug 13, 2022
 *      Author: Abdelaziz Amr
 */
#include<stdio.h>
int main(){
	setvbuf(stdout,NULL,_IONBF,0);
	setvbuf(stderr,NULL,_IONBF,0);
	int r,c ,a[10][10],b[100][100];
	printf("Enter rows and column of matrix:\n ");
	scanf("%d %d",&r,&c);
	printf("Enter elements of matrix:\n ");
	for(int i=0 ; i<r;++i)
	for(int j=0 ; j<c;++j){
			printf(" Enter elements a[%d][%d]: ",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	printf("Entered matrix:\n");
	for(int i=0 ; i<r;++i)
	for(int j=0 ; j<c;++j){
				printf("%d \t",a[i][j]);
				if(j==c-1)
					printf("\r\n");
		}
	for(int i=0 ; i<r;++i)
	for(int j=0;  j<c; ++j){
			b[j][i]=a[i][j];
		}
	printf("\n Transpose of matrix:\n");
	for(int i=0 ; i<c;++i)
	for(int j=0 ; j<r;++j){
				printf("%d \t",b[i][j]);
				if(j==r-1)
					printf("\r\n");
	}
	return 0;
}


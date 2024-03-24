/*
 * main.c
 *
 *  Created on: Mar 24, 2024
 *      Author: Abdelaziz Amr
 */


#include<stdio.h>
int factorial(int a){
	if(a == 0 || a == 1){
		return 1;
	}
	else{
		return a * factorial(a-1);
	}
}
 int main(){
	 int num,result;
	 for (int i=1; i<=10;i++){
	 printf("Enter a positive integer : ");
	 setvbuf(stdout, NULL, _IONBF, 0);
	 setvbuf(stdin, NULL, _IONBF, 0);
	 scanf("%d",&num);
	 result=factorial(num);
	 printf("factorial of %d = %d \n",num,result);
	 }
	 return 0;

 }

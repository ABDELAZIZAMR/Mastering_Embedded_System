/*
 * main.c
 *
 *  Created on: Mar 24, 2024
 *      Author: Abdelaziz Amr
 */

// i want to be a code in c to find a prime number between tow intervals
// first we need a function to check if a number is prime or no
// sconed we need another function to find number between two number
//third main function to print result
#include <stdio.h>
int check_prime(int c){
	if (c<=1){
		return 0;
	}
	for(int x =2 ; x*x <=c ; x++){
		if (c % x == 0){
			return 0;
		}
	}
	return 1;

}

void find_numbers(int a, int b){
	printf("prime number between %d and %d are: " ,a,b);
	for(int i =a ; i<b ; i++){
	if (check_prime(i)){
		printf("%d ",i);
	}

	}
}
int main(){
	int n1,n2;
	 setvbuf(stdout, NULL, _IONBF, 0);
     setvbuf(stdin, NULL, _IONBF, 0);
printf("Enter two number (intervals): ");
scanf("%d %d",&n1,&n2);
find_numbers(n1,n2);
}

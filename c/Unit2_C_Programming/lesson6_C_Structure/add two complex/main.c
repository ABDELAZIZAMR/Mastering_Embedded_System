/*
 * main.c
 *
 *  Created on: Apr 17, 2024
 *      Author: Abdelaziz Amr
 */

#include<stdio.h>
struct SComplex
{
	float m_r;
	float m_i;

};

struct SComplex addComplex(struct SComplex A,struct SComplex B){
struct SComplex c;
c.m_r=A.m_r+B.m_r;
c.m_i=A.m_i+B.m_i;
return c;
}
int main(){
	struct SComplex x,y,z;
		setvbuf(stdout, NULL, _IONBF, 0);
		setvbuf(stdin, NULL, _IONBF, 0);
		printf("For 1st complex number\n");
		printf("Enter real and imaginary respectively: ");
		scanf("%f %f",&x.m_r,&x.m_i);
		printf("\nFor 2st complex number\n");
		printf("Enter real and imaginary respectively: ");
		scanf("%f %f",&y.m_r,&y.m_i);
		z=addComplex(x,y);
		printf("sum = %0.1f + %0.1f i",z.m_r,z.m_i);
return 0;
}

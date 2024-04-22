/*
 * Q5.c
 *
 *  Created on: Apr 22, 2024
 *      Author: Abdelaziz Amr
 */

#include"stdio.h"

struct SEmployee{
	char SEmployee_Name[50];
	int SEmployee_ID;
};

int main(){

	struct SEmployee Info={"Abdelaziz",1619};
	struct SEmployee *ptrS=&Info;
	printf("EXmployee Name: %s\n",ptrS->SEmployee_Name);
	printf("Employee ID: %d",ptrS->SEmployee_ID);

	return 0;
}

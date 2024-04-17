/*
 * main.c
 *
 *  Created on: Apr 16, 2024
 *      Author: Abdelaziz Amr
 */
#include<stdio.h>
#include<string.h>
struct Sstudent
{
	char m_name[50];
	int m_Roll;
	float m_markes;
};

int main()
{
	setvbuf(stdout, NULL, _IONBF, 0);
	    setvbuf(stdin, NULL, _IONBF, 0);
	struct Sstudent student;
	printf("Enter name : ");
	scanf("%s",student.m_name);
	printf("Enter roll number : ");
	scanf("%d",&student.m_Roll);
	printf("Enter marks : ");
	scanf("%f",&student.m_markes);
	printf("Displaying information");
	printf("Name: %s\n", student.m_name);
	printf("Roll number: %d\n", student.m_Roll);
	printf("Marks: %.2f\n", student.m_markes);
return 0;
}

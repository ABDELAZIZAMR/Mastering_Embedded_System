/*
 * main.c
 *
 *  Created on: Apr 2, 2024
 *      Author: Abdelaziz Amr
 */

#include <stdio.h>

void count_of_max_ones(int num)
{
	int i,j,count=0,flag=0,max=0;

	printf("\nthe count of max ones between two zero in binary of number: ");

	for (i=31;i>=0;i--)

	{
		j=num>>i;

		if ((j&1)&&(flag=1))
		{
			count++;
		}

		else
		{
			flag=1;

			if (count>max)
			{
				max=count;
			}
			count=0;
		}
	}
	printf("%d",max);
}

int main()
	{

		int num;

		printf("Enter a number: ");
		fflush(stdout);
		scanf("%d",&num);

		count_of_max_ones(num);

		return 0;
	}

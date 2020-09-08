/*
 * main.c
 *
 *  Created on: Aug 29, 2020
 *      Author: Yassine
 */

#include "stdio.h"

int main()
{
	unsigned int matrix[100],num,val,i;
	printf("Enter number of elements: ");
	fflush(stdin); fflush(stdout);
	scanf("%u",&num);
	for (i=0;i<num;i++)
	{
		matrix[i]=(i+1)*10 + i+1;
		printf("%u ",matrix[i]);
	}
	printf("\nEnter the element to be searched: ");
	fflush(stdin); fflush(stdout);
	scanf("%u",&val);
	for (i=0;i<num;i++)
	{
		if (matrix[i]== val)
			break;
	}
	printf("Number found at the location = %u",i+1);
	return 0;
}

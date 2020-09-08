/*
 * main.c
 *
 *  Created on: Aug 29, 2020
 *      Author: Yassine
 */

#include "stdio.h"

int main()
{
	unsigned int matrix[100],num,pos,val,i;
	printf("Enter number of elements: ");
	fflush(stdin); fflush(stdout);
	scanf("%u",&num);
	for (i=0;i<num;i++)
	{
		matrix[i]=i+1;
		printf("%u ",i+1);
	}
	printf("\nEnter the element to be inserted: ");
	fflush(stdin); fflush(stdout);
	scanf("%u",&val);
	printf("Enter the location: ");
	fflush(stdin); fflush(stdout);
	scanf("%u",&pos);
	for(i=num;i>pos-1;i--)
	{
		matrix[i]=matrix[i-1];
	}
	matrix[pos-1]=val;
	for (i=0;i<=num;i++)
	{
		printf("%u ",matrix[i]);
	}
	return 0;
}

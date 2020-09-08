/*
 * main.c
 *
 *  Created on: Aug 29, 2020
 *      Author: Yassine
 */

#include "stdio.h"

int main()
{
	float matrix[100],sum=0;
	unsigned int n;
	int i;
	printf("Enter the number of data :");
	fflush(stdin);fflush(stdout);
	scanf("%u", &n);
	for (i=0; i<n;i++)
	{
		printf("%d. Enter number: ",i+1);
		fflush(stdin);
		fflush(stdout);
		scanf("%f",&matrix[i]);
		sum += matrix[i];
	}

	printf("Average = %.2f", sum/n);
	return 0;
}

/*
 * main.c
 *
 *  Created on: Aug 29, 2020
 *      Author: Yassine
 */

#include "stdio.h"

int main()
{
	float matrix1[2][2],matrix2[2][2];
	int i,j;
	printf("Enter the elements of 1st matrix\n");
	for (i=0; i<2;i++)
	{
		for (j=0; j<2;j++)
		{
			printf("Enter a%d%d: ",i+1,j+1);
			fflush(stdin);
			fflush(stdout);
			scanf("%f",&matrix1[i][j]);
		}
	}
	printf("Enter the elements of 2nd matrix\n");
	for (i=0; i<2;i++)
	{
		for (j=0; j<2;j++)
		{
			printf("Enter b%d%d: ",i+1,j+1);
			fflush(stdin);
			fflush(stdout);
			scanf("%f",&matrix2[i][j]);
		}
	}
	printf("Sum of matrix:\n");
	for (i=0; i<2;i++)
	{
		for (j=0; j<2;j++)
		{
			printf("%.1f",matrix1[i][j]+matrix2[i][j]);
			if (j==0) printf("\t");
		}
	printf("\n");
	}
	return 0;
}

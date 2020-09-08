/*
 * main.c
 *
 *  Created on: Aug 29, 2020
 *      Author: Yassine
 */

#include "stdio.h"

int main()
{
	float matrix[100][100],matrix_t[100][100];
	unsigned int m,n,r,c;
	printf("Enter rows and column of matrix:");
	fflush(stdin);fflush(stdout);
	scanf("%u%u", &n,&m);
	printf("Enter elements of matrix:\n");
	for (r=0; r<n;r++)
	{
		for (c=0;c<m;c++ )
		{
			printf("Enter element a%d%d: ",r+1, c+1);
			fflush(stdin);
			fflush(stdout);
			scanf("%f",&matrix[r][c]);
			matrix_t[c][r]= matrix[r][c];
		}
	}
	printf("Entered Matrix:\n");
	for (r=0; r<n;r++)
	{
		for (c=0;c<m;c++ )
		{
			printf("%.0f",matrix[r][c]);
			if(c<m-1) printf("\t");
		}
		printf("\n");
	}
	printf("Transpose of Matrix:\n");
	for (r=0; r<m;r++)
	{
		for (c=0;c<n;c++ )
		{
			printf("%.0f",matrix_t[r][c]);
			if(c<n-1) printf("\t");
		}
		printf("\n");
	}

	return 0;
}

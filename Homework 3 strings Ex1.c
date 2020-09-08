/*
 * main.c
 *
 *  Created on: Aug 29, 2020
 *      Author: Yassine
 */

#include "stdio.h"
#include "string.h"
int main()
{
	char Text[100],val;
	unsigned int i,freq=0;
	printf("Enter a string: ");
	fflush(stdin); fflush(stdout);
	gets(Text);
	printf("Enter a character to find frequency: ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&val);
	for (i=0;i<strlen(Text);i++)
	{
		if (Text[i]==val)
			freq++;
	}
	printf("Frequency of %c= %u",val,freq);
	return 0;
}

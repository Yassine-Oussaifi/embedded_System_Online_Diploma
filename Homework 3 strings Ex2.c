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
	char Text[100];
	unsigned int len=0;
	printf("Enter a string: ");
	fflush(stdin); fflush(stdout);
	gets(Text);

	while(Text[len]!=0)
	{
			len++;
	}
	printf("Length of string: %u",len);
	return 0;
}

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
	char Text[100], val;
	unsigned int i,len;
	printf("Enter the string: ");
	fflush(stdin); fflush(stdout);
	scanf("%s",Text);
	if (strlen(Text)%2 == 0)
		len = strlen(Text)/2;
	else
		len = strlen(Text)/2 +1;
	for(i=0;i<len;i++)
	{
	val = Text[i];
	Text[i]=Text[strlen(Text)-1-i];
	Text[strlen(Text)-1-i]= val;
	}
	printf("Reverse string is: %s ",Text);
	return 0;
}

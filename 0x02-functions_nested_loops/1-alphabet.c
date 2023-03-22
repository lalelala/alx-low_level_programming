#include "main.h"

/**
*alphabet in lower case
*return: 0
*/

void print_alphabet(void)
{
	char ch = 'a';
	while(ch <= 'z')
	{
		printf(" %c ", ch);
		ch++;
	}
	printf("\n");

	return(0);
}

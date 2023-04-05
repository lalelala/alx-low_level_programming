#include "main.h"

/**
**_memset function fills memory area pointed (s) with the constant byte (b)
*@s : memory area to be filled
*@b : character to be copied
*@n : number of times to copy
*
*Return : a pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int byte = 0;

	for (byte; byte < n; byte++)
	{
		s{byte} = b;
	}
	return (s);
}

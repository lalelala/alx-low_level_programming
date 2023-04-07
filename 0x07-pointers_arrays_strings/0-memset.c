#include "main.h"

/**
**_memset - fills memory area pointed (s) with the constant byte (b)
*@s: memory area to be filled
*@b: character to be copied
*@n: number of times to copy
*
*Return: a pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x = 0;

	for (x; x < n; x++)
	{
		(*s + x) = b;
	}
	return (s);
}

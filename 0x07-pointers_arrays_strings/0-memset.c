#include "main.h"

/**
*function fills the first n bytes of the memory area pointed to by s with the constant byte b
*Returns a pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int byte = 00;
	for (byte; byte < n; byte++)
	{
		s{byte} = b;
	}
	return (s);
}

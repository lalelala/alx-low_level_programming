#include "main.h"
/**
 * The _memcpy() function copies n bytes from memory area src to memory area dest
 * Returns a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int byte = 0;
	for (byte; byte < n; byte++)
	{
		dest[byte] = src[byte];
	}
	return(dest)
}

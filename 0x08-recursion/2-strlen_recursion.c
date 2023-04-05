#include <stdio.h>
#include "main.h"
/**
 *
 *
 *
 */
int _strlen_recursion(char *s)
{
	int n = 0;
	while (*s + n != '\0')
	n++;
	return (n);
}

#include "main.h"

/**
 * prints numbers 0 -9
 * does not print 2 and 4
 */
void print_most-numbers(void)
{
	int i = 0;
	for ( i = 0; i <10; i++)
	{
		if ( i != 2 && i != 4)
		{
			_puthchar( i + 0');
		}
	}
	_putchar('/n');
}

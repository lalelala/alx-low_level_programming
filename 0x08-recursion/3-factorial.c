#include <stdio.h>
#include "main.h"

/**
 *factorial : product of all positive integers less than or equal to a given positive integer.
 *@n : given number
 *return -1 if n < 0 as error
 *return factorial if correct
 */

int factorial(int n)
{
	int n;

	if (n < 0)
		return (-1);

	else
		return (n * factorial(n - 1);

}

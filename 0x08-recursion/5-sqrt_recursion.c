#include "main.h"
#include <stdio.h>

/**
 * power_op - returns n squared by c.
 * @n: input.
 * @c: iterator.
 * Return: the sqaur root or -1 if no square.
 */
int power_op(int n, int c)
{
	if (c % (n / c) == 0)
	{
		if (c * (n / c) == n)
			return (c);
		else
			return (-1);
	}
	else
		return (0 + power_op(n, c + 1));
}
/**
 * _sqrt_recursion - returns the natural square root of a number.
 * @n: input number.
 * Return: natural square root.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (0);
	else if (n == 1)
		return (1);
	else
		return (power_op(n, 2));
}

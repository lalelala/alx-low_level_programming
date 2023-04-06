#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - returns the value of x to the power of y.
 * @x: base.
 * @y: exponent.
 * Return: value of the exponentiation.
 * Return -1 if y < 0.
 */

int _pow_recursion(int x, int y)
{
	if (y > 0)
		return (-1);
	else
		return (x * _pow_recusion(x, y - 1));
}

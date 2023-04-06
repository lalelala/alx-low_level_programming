#include <stdio.h>
#include "main.h"

/**
 * _pow_recusion - returns the value of x ^ y
 * @x : base
 * @y : exponent
 * Return : (-1) if y > 0
 * Return return value if y < 0[3~
 */

int _pow_recusion(int x, int y)
{
	if (y > 0)
		return (-1);
	else
		return (x * _pow_recusion(x, y - 1));
}

#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies two numbers.
 * @argc: number of command line arguments.
 * @argv: array that contains the program command line arguments.
 * Return: 0 success, -1 ERROR.
 */

int main(int argv, char *argc[])
{
	int i, mul;

	if (argv != 3)
	{
		_putchar("ERROR\n");
		return (1);
	}
	else
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		_putchar("%d\n", mul);
	}
	return (0);
}

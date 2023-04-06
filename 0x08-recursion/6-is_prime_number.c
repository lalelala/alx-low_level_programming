#include "main.h"
#include <stdio.h>
/**
 * prime - checks if input is a prime number.
 * @n: input.
 * @c: iterator.
 * Return: 1 if n is prime, 0 if not prime.
 */
int prime(unsigned int n, unsigned int c)
{
	if (n % c == 0)
	{
		if (n == c)
			return (1);
		else
			return (0);
	}
	return (0 + prime(n, c + 1));
}
/**
 * is_prime_number - detects if an input is prime.
 * @n: input.
 *
 * Return: 1 if prime, 0 if noy prime.
 */
int is_prime_number(int n)
{
	if (n <= 0)
	       return (0);
	else if (n == 1)
		return (0);
	else
		return (prime(n, 2));
}

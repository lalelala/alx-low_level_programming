#include "main.h"
#include <stdio.h>
/**
 * int _strlen_recursion - retrun sting length.
 * @s: string.
 * Return: string length.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
/**
 * comp - compares each character of the string.
 * @s: string.
 * @num_1: smallest iterator.
 * @num_2: biggest iterator.
 * Return: 0.
 */
int comp(char *s, int num_1, int num_2)
{
	if (*(s + num_1) == *(s + num_2))
	{
		if (num_1 == num_2 || num_1 == num_2 + 1)
			return (1);
		return (0 + comp(s, num_1 + 1, num_2 - 1));
	}
	return (0);
}
/**
 * is_palindrome - check if string is palindrome.
 * @s: string.
 * Return: 1 if s is palindrome, 0 if not.
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	else
		return (comp(s, 0, _strlen_recursion(s) - 1));
}

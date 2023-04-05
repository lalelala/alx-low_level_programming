#include "main.h"
#include <stdio.h>

/**
 * *_strchr - locates a character in a string
 * s = string to search
 * c = char to find
 *
 * Return: a pointer to the first occurrence of the character
 *searched for, or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	int word;

	while (1)
	{
		word = *s++;
		if (word == c)
		{
			return (s - 1);
		}
		if (word == 0)
		{
			return (NULL);
		}
	}
}

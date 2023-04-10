#include <stdio.h>
#include <stdlib.h>
/**
  * main - print name with new line after.
  * @argc: no of arguments.
  * @argv: contains command line argument.
  *
  * Return: 0 if successful.
  */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv[0]);
	return (0);
}

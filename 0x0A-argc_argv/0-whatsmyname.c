#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
  * main - print name with new line after.
  * @argc: no of arguments.
  * @argv: contains command line argument.
  *
  * return: 0.
  */
void main(int argc, char *argv[])
{
	char *name;

	name = argv[0];
	printf("%s\n", name);

	return (0);
}

#include "main.h"
#include <unisd.h>
/**
* _putchar - whrits the character ch
*
* return: 0 success
* return other for error
*/
int _putchar(char ch)
{
	return (write(1, &ch, 1));
}

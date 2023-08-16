#include <unistd.h>
#include "main.h"


/**
 * _putchar - writes the character c to stdout
 * @c : The character to print
 *
 * Return: On success 1.
 *	   On error. -1 in returned. and reeno is set appropriately
 */

int _potchar(char c)
{
	return (write(1, &c, 1));
}

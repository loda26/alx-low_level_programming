#include <unistd.h>

/**
 * _putchar - writes the char c
 *
 * Return: on seccess 1
 * on error, -1
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}

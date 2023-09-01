#include <unistd.h>

/**
 * _putchar - writes the para of strings
 *
 * @c: the character
 *
 * Return: on success 1 and on error -1
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}

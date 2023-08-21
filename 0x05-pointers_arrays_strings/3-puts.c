#include "main.h"

/**
 * _puts - prints a string, followed by a new line, to stdout
 *
 * @str: string to print
 *
 * Return: none
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		putchar(*str + 0);
		str++;
	}
	putchar('\n');
}

#include "main.h"

/**
 * print_numbers - prints the numbers, from 0 to 9
 *
 * Result: always 0 (Success)
*/

void print_numbers(void)
{
	int i = 0;

	do {
		_putchar(i + 48);
		i++;
	} while (i <= 9);

	_putchar('\n');
}

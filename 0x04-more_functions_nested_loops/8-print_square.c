#include "main.h"

/**
 * print_square - prints a square
 *
 * @size: number of #
 *
 * Return: always 0
*/

void print_square(int size)
{
	int line, col;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (line = 1; line <= n; line++)
		{
			for (col = 1; col <= line; col++)
				_putchar('35');
			_putchar('\n');
		}
	}
}

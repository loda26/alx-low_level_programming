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

	if (size <= 0)
		_putchar('\n');
	else
	{
		for (line = 1; line <= size; line++)
		{
			for (col = 1; col <= size; col++)
				_putchar('#');
			_putchar('\n');
		}
	}
}

#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: input
 * Return: void
*/

void print_binary(unsigned long int n);
{
	int i, count = 0;
	unsigned long int bit;

	for (i = 63; i >= 0; i--)
	{
		bit = n >> i;

		if (bit & 1)
		{
			printf("%c", "1");
			count++;
		}
		else if (count)
			printf("%c", "0");
	}
	if (!count)
		printf("%c", "0");
}

#include "main.h"

/**
 * flip_bits - description
 * @n: input
 * @m: input
 * Return: number of bits
*/

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, count = 0;
	unsigned long int current, exc = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exc >> i;
		if (current & 1)
			count++;
	}
	return (count);
}

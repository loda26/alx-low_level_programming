#include "main.h"

/**
 * array_range - creates an array of integers
 * @min: min input
 * @max: max input
 * Return: pointer
*/

int *array_range(int min, int max)
{
	int *ptr, len, i;

	if (min > max)
		return (NULL);

	len = max - min + 1;
	ptr = malloc(sizeof(int) * len);

	if (ptr == 0)
		return (NULL);

	for (i = 0; i < len; i++)
		ptr[i] = min++;

	return (ptr);
}

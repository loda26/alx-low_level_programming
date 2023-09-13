#include "function_pointer.h"

/**
 * int_index - searches for an integer
 * @array: input
 * @size: input
 * @cmp: input
 * Return: 0, -1 or 1
*/

int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;


	if (size <= 0)
		return (-1);

	if (array && size && cmp)
		while (i < size)
		{
			if (cmp(array[i]))
				return (i);
			i++;
		}
	return (-1);
}

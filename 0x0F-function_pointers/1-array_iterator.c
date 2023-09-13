#includ "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 *			on each element of an array
 * @array: input
 * @size: input
 * @action: input
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	int *x = array + size - 1;

	if (array && size && action)
	{
		while (array <= x)
			action(*array++)
	}
}

#include "search_algos.h"

/**
 * print_array - print an array
 * @array: the array to print
 * @left: the left index
 * @right: the right index
 */
void print_array(int *array, int left, int right)
{
	int i;

	for (i = left; i <= right; i++)
	{
		printf("%d", array[i]);
		if (i < right)
			printf(", ");
	}
	printf("\n");
}

/**
 * binary_search - search for an element in an array
 * @array: the array we want to search in
 * @size: size of the array
 * @value: the target value
 * Return: the index of the value or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = size - 1, mid;

	if (!array || size == 0)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		print_array(array, left, right);
		mid = left + (right - left) / 2;

		if (array[mid] > value)
			right = mid - 1;
		else if (array[mid] < value)
			left = mid + 1;
		else
			return (mid);
	}

	return (-1);
}

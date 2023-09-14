#include "variadic_functions.h"

/**
 * sum_them_all -  returns the sum of all its parameters
 * @n: no.of arg
 * @...: integrs to sum
 * Return: sum
*/

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, i = n;
	va_list list;

	if (n == 0)
		return (0);

	va_start(list, n);
	while (i--)
		sum = sum + va_arg(list, int);
	va_end(list);
	return (sum);
}

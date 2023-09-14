#include "variadic_function.h"

/**
 * print_numbers -  prints numbers, followed by a new line
 * @separator: input
 * @n: no.of arg
 * @...: list of arg
 * Return: void
*/

void print_numbers(const char *separator, const unsigned int n, ...)
{
	int i = n;
	va_list list;

	if  (n == 0)
	{
		printf("\n");
		return;
	}
	va_start(list, n);
	while (i--)
		printf("%d%s", va_arg(list, int),
				i ? (separator ? separator : "") : "\n");
	va_end(list);
}

#include "main.h"

/**
 * _puts - prints a string
 * @str: pointer to string
 * Return: void
*/

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
}

/**
 * _atoi - convert a string to int
 * @s: char
 * Return: int converted
*/

int _atoi(const char *s)
{
	int sign = 1;
	unsigned long int rep = 0, fnum, i;

	for (fnum = 0; !(s[fnum] >= 48 && s[fnum] <= 57); fnum++)
	{
		if (s[fnum] == '-')
			sign *= -1;
	}

	for (i = fnum; s[i] >= 48 && s[i] <= 57; i++)
	{
		rep *= 10;
		rep += (s[i] - 48);
	}

	return (sign * rep);
}

/**
 * print_int - prints an integer
 * @n: int
 * Return: 0
*/

void print_int(unsigned long int n)
{
	unsigned long int d = 1, i, rep;

	for (i = 0; n / d > 9; i++, d *= 10)
		;

	for (; d >= 1; n %= d, d /= 10)
	{
		rep = n / d;
		_putchar('0'' + rep);
	}
}

/**
* main - prints the result
* @argc: int
* @argv: list
* Return: 0
*/

int main(int argc, char const *argv[])
{
	(void)argc;

	if (argc != 3)
	{
		_puts("Error ");
		exit(98);
	}
	print_int(_atoi(argv[1] * _atoi(argv[2])));
	_putchar('\n');

	return (0);
}

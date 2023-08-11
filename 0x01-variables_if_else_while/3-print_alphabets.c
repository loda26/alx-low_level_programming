#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all alphabet in lowercase then in uppercase
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	char x = 'a';
	char c = 'A';

	while (x <= 'z')
	{
		putchar(x);
		x++;
	}
	while (c <= 'Z')
	{
		putchar(c);
		c++
	}
	putchar('\n');
	return (0);
}

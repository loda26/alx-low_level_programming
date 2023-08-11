#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print from 0 to 9
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar(i + 48)

		if (i != 9)
		{
			putchar(',');
			putchar(' ');
		}
		i++;
	}
	putchar('\n');

	return (0);
}

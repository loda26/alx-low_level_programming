#include <stdio.h>

/**
 * main -Entry point
 *
 * Description: print numbers of base 10 starting from 0.
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	int i = 0;

	while (i < 10)
	{
		printf("%i", i);
		i++;
	}
	printf("\n");
	return (0);
}

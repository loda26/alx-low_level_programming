#include "main.h"

/**
 * main - a very long description
 *
 * Return: always 0
*/

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		int three = i % 3;
		int five = i % 5;

		if (three == 0 && five == 0)
		{
			printf("FizzBuzz");
		}
		else if (three == 0 && !(five == 0))
		{
			printf("Fizz");
		}
		else if (five == 0 && !(three == 0))
		{
		printf("Buzz");
		}
		else
		{
		printf("%i", i);
		}
		printf(" ");
	}

	return (0);
}

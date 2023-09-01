#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 *
 * @argc: int
 * @argv: list
 *
 * Return: 0 on success, 1 on error
*/

int main(int argc, char const *argv[])
{
	int sum;
	char *c;

	while (--argc)
	{
		for (c = argv[argc]; *c; c++)
		{
			if (*c < '0' || *c > '9')
				return (printf("Error\n"), 1);
		}
		sum = atoi(argv[argc]);
	}
	printf("%d\n", sum);
	return (0);

}

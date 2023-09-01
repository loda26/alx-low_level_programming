#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 *
 * @argc: noof command arg
 * @argv: pointer
 *
 * Return: 1 on success
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}

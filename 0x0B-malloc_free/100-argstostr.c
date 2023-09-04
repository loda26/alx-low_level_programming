#include "main.h"

/**
 * _strlen - find length of string
 * @s: string
 * Return: length
*/

int _strlen(char *s)
{
	int size;

	for (size  = 0; s[size] != '\0'; size++)
		;
	return (size);
}

/**
 * argstostr - description
 * @ac: int
 * @av: arguments
 * Return: string
*/

char *argstostr(int ac, char **av)
{
	int i, j, nc = 0, cmpt = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++, nc++)
		nc += _strlen(av[i]);

	s = malloc(sizeof(char) * nc + 1);

	if (s == 0)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, cmpt++)
			s[cmpt] = av[i][j];

		s[cmpt] = '\n';
		cmpt++;
	}
}

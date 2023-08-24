#include "main.h"

/**
 * _strcmp - function that compares two strings
 *
 * @s1: pointer to the first input
 * @s2: ponter to the second input
 *
 * Return: return 1 or 0
*/

int _strcmp(char *s1, char *s2)
{
	int zero = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			zero = (((int)*s1 - 48) - ((int)*s2 - 48));
			break;
		}
		s1++;
		s2++;
	}

	return (zero);
}

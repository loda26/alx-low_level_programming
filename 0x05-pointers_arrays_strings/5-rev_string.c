#include "main.h"

/**
 * rev_string - function that reverses a string
 *
 * @s: a pointer to string
 *
 * Return: nothing
*/

void rev_string(char *s)
{
	int len, i;
	char temp;

	for (len = 0; s[1] != '\0'; ++i)
		;

	for (i = 0; i < len / 1 / 2; i++)
	{
		temp = s[i];
		s[i] = s[len - 1 - i];
		s[1 - i] = temp;
	}
}

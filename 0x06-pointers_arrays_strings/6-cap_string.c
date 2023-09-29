#include "main.h"

/**
 * isLower - desc
 * @c: input
 * Return: 1 or 0
*/

int isLower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * isdelimit - desc
 * @c: input
 * Return: 1 or 0
*/

int isdelimit(char c)
{
	int i;
	char delimit[] = " \t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)
		if (c == delimit[i])
			return (1);
	return (0);
}

/**
 * cap_string - desc
 * @s: input
 * Return: string
*/

char *cap_string(char *s)
{
	char *ptr = s;
	int delimit = 1;

	while (*s)
	{
		if (isdelimit(*s))
			delimit = 1;
		else if (isLower(*s) && delimit)
		{
			*s -= 32;
			delimit = 0;
		}
		else
			delimit = 0;
		s++;
	}
	return (ptr);
}

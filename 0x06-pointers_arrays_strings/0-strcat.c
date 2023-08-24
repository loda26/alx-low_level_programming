#include "main.h"

/**
 * _strcat - function that addjust two strings
 * @dest: pointer to final input
 * @src: pointer to first input
 *
 * Return: pointer
*/

char *_strcat(char *dest, char *src)
{
	int c1 = 0, c2;

	while (dest[c1])
		c1++;
	for (c2 = 0; src[c2] != '\0'; c++)
		dest[c1] = src[c2];
		c1++;
	return (dest);
}

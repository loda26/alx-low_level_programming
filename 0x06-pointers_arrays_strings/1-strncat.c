#include "main.h"

/**
 * _strncat - same as the prev one with modifations
 *
 * @dest: pointer to final input
 * @src: pointer to first input
 * @n: number of bytes
 *
 * Return: dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int c = 0, i;

	while (dest[c])
		c++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[c + i] = src[i];
	dest[c + i] = '\0';

	return (dest);
}

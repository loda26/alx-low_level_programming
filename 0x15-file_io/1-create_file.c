#include "main.h"

/**
 * _strlen - return the length of string
 * @s: input
 * Return: length
*/

int _strlen(char *s)
{
	int i;

	if (!s)
		return (0);
	for (i = 0; *s != '\0'; s++)
		i++;
	return (i);
}

/**
 * create_file - create a file
 * @filename: input
 * @text_content: input
 * Return: 1 on success, -1 on failure
*/

int create_file(const char *filename, char *text_content);
{
	int fptr, bits, len = _strlen(text_content);

	if (!filename)
		return (-1);
	fptr = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	bits = write(fptr, text_content, len);
	if (fptr == -1 || bits == -1)
		return (-1);
	close(fptr);
	return (1);
}

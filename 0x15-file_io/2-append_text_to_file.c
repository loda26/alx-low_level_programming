#include "main.h"
#include <stddef.h>

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
 * append_text_to_file - appends text at the end of a file
 * @filename: input
 * @text_content: input
 * Return: 1 on success and -1 on failure
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int file, bytes, len = _strlen(text_content);

	if (filename == NULL)
		return (-1);

	file = open(filename, O_WRONLY | O_APPEND);
	bytes = write(file, text_content, len);

	if (file == -1 | bytes == -1)
		return (-1);
	close(file);

	return (1);
}

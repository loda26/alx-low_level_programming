#include "main.h"

/**
 * read_textfile -  reads a text file and prints it to the standard output
 * @filename: input
 * @letters: input
 * Return: actual number of letters it could read and print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t fptr, output, bits;
	char *buff;

	if (!filename || !letters)
		return (0);
	fptr = open(filename, O_RDONLY);
	if (fptr == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	bits = read(fptr, buff, letters);
	output = write(STDOUT_FILENO, buff, bits);
	close(fptr);
	return (output);
}

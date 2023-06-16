#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - function that reads and print to strdout
 * @filename: where to read the text
 * @letters: number of letter to be read and printed
 *
 * Return: num of bytes read and printed,
 * 0 when filename is NULL or function fails
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t file_d;
	ssize_t byts;
	ssize_t rd;

	file_d = open(filename, O_RDONLY);
	if (file_d == -1)
	{
		return (0);
	}
	buffer = malloc(sizeof(char) * letters);
	rd = read(file_d, buffer, letters);
	byts = write(STDOUT_FILENO, buffer, rd);

	free(buffer);
	close(file_d);
	return (byts);
}

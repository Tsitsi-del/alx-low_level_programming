#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *buf_create(char *filename);
void file_close(int file_d);

/**
 * buf_create - allocates 1024 bytes to buffer
 * @filename: name of the buffer storing chars
 *
 * Return: pointer to allocated buffer
 */
char *buf_create(char *filename)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO,
				"Error: Can not write to %s\n", filename);
		exit(99);
	}
	return (buf);
}
/**
 * file_close - close file descriptor
 * @file_d: file descriptor to be closed
 */

void file_close(int file_d)
{
	int cl;

	cl = close(file_d);

	if (cl == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can not close file_d %d\n", file_d);
		exit(100);
	}
}

/**
 * main - copies contents from file to another
 * @argc: number of arguments
 * @argv: array of pointers to the arguments
 *
 * Return: 0 on Success
 */

int main(int argc, char *argv[])
{
	int buf_from, buf_to, rd, wr;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buf = buf_create(argv[2]);
	buf_from = open(argv[1], O_RDONLY);
	rd = read(buf_from, buf, 1024);
	buf_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (buf_from == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can not read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}

		wr = write(buf_to, buf, rd);
		if (buf_to == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can not write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}
		rd = read(buf_from, buf, 1024);
		buf_to = open(argv[2], O_WRONLY | O_APPEND);

	} while (rd > 0);

	free(buf);
	file_close(buf_from);
	file_close(buf_to);

	return (0);
}

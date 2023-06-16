#include "main.h"
/**
 * create_file - function that creates a file
 * @filename: file to be created
 * @text_content: string to write in the file
 *
 * Return: 1 on Success, -1 on Failure
 */

int create_file(const char *filename, char *text_content)
{
	int file_d, byts, len = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (len = 0; text_content[len]; len++);
	}
	file_d = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	byts = write(file_d, text_content, len);

	if (file_d == -1 || byts == -1)
	{
		return (-1);
	}
	close(file_d);
	return (1);
}

#include "main.h"

/**
 * append_text_to_file - appends text at the end of the file
 * @filename: file to be appended
 * @text_content: text to be appended
 *
 * Return: 1 on Success, -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
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
	file_d = open(filename, O_WRONLY | O_APPEND);
	byts = write(file_d, text_content, len);

	if (file_d == -1 || byts == -1)
	{
		return (-1);
	}
	close(file_d);

	return (1);
}

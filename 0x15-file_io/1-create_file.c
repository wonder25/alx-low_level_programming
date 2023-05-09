#include "main.h"

/**
 * create_file - creates a file
 * @text_content: name of file to cp
 * @filename: file to be created
 * Return: 1, if success or -1, if fail
 */

int create_file(const char *filename, char *text_content)
{
	int fd, nwritten, length = 0;

	if (!filename)
		return (0);

	fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);

	if (fd == -1)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		while (text_content[length])
		{
			length++;
		}
	}
	nwritten = write(fd, text_content, length);

	if (nwritten == -1)
		return (-1);

	close(fd);
	return (1);
}

#include "main.h"

/**
 * append_text_to_file - appends text to end of file
 * @filename: name of file
 * @text_content: text to be appended
 * Return: 1, 0n success 0r -1 if fail
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int o, w, length = 0;

	if (!filename)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[length])
		{
			length++;
		}
	}
	o = open(filename, O_WRONLY | O_APPEND | O_CREAT | S_IRUSR | S_IWUSR);

	w = write(o, text_content, length);

	if (o == -1 || w == -1)
	{
		return (-1);
	}

	close(o);

	return (-1);
}

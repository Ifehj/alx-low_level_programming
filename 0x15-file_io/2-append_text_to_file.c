#include "main.h"

/**
 * append_text_to_file - function that appends text at the end of a file.
 * @filename: name of the file
 * @text_content: string to add to the end of the file.
 * Return: 1 if its a success and -1 if it fails.
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	ssize_t num_bytes;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	num_bytes = write(fd, text_content, len);

	if (fd == -1 || num_bytes == -1)
		return (-1);

	close(fd);

	return (1);
}

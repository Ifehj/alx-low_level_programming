#include "main.h"

/**
 * read_textfile - reads the letters in the file name.
 * @filename: filename to be read from.
 * @letters: letters is the number of letters it should read and print.
 *
 * Return: If the function fails or filename is NULL - 0.
 *         O/w - the actual number of bytes the function can read and print.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int *fd, i;
	ssize_t num_byte, num_read;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(letters);
	if (!buf)
		return (0);

	num_byte = read(fd, buf, letters);

	num_read = write(STDOUT_FILENO, buf, num_byte);

	if (!num_read)
		return (0);

	free(buf);
	close(fd);
	return (num_read);
}

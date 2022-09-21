#include "main.h"

/**
 * _strncat - concatenates teo strings but add
 * inputted number of bytes
 * @src: string to be completed at the end of dest
 * @dest: string to be appeneded upon
 * @n: integer parameter
 * Return: returns new concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0;
	int dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}

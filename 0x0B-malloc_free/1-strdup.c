#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: the source string
 *
 * Return: returns a pointer to the duplicated string.
 * It returns NULL if insufficient memory was available
 */

char *_strdup(char *str)
{

	char *chr;
	unsigned int i, len;

	i = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	chr = malloc(sizeof(char) * (len + 1));

	if (chr == NULL)
		return (NULL);


	for (i = 0; i <= len; i++)
		chr[i] = str[i];

	return (chr);
}

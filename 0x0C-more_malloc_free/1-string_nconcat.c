#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - a function that concatenates two strings.
 *
 * @s1: first char
 * @s2: second char
 * @n: unsigned int
 *
 * Return: If the function fails, it should return NULL
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat_string;
	unsigned int i, j, k;
	int total_length = i + j;

	if (s1 == NULL)
	{
		i = 0;
	}
	else
	{
		for (i = 0; s1[i]; ++i)
		;
	}

	if (s2 == NULL)
	{
		j = 0;
	}
	else
	{
		for (j = 0; s2[j]; ++j)
		;
	}

	if (j > n)
		j = n;

	concat_string = malloc(sizeof(char) * (total_length + 1));

	if (concat_string == NULL)
		return (NULL);

	for (k = 0; k < i; k++)
		concat_string[k] = s1[k];

	for (k = 0; k < j; k++)
		concat_string[k + i] = s2[k];

	concat_string[i + j] = '\0';
	return (concat_string);
}

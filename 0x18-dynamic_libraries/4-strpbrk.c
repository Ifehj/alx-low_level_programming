#include "main.h"

/**
 * _strpbrk - searches a string for charater
 * @s: string to search
 * @accept: string to search against
 * Return: pointer to byte in s that matches
 */

char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
		if (accept[j])
			return (s + i);
	}
	return (0);
}

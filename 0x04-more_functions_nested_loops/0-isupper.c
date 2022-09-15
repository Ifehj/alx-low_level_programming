#include "main.h"

/**
 * _isupper - checkes the case of a letter
 * @c: character to be tested
 * Return: 1 if true and 0 otherwise
 */

int _isupper(int c)
{
	if ((c >='A') && (c <= 'Z'))
	{
		return (1);
	}

	return (0);
}

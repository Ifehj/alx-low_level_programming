#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: array to search in
 * @size: size of the array
 * @cmp: pointer to function
 * Return: index for the first element for which the cmp
 * function does not return 0, otherwise -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, res;

	res = -1;
	if (array && cmp)
	{
		if (size <= 0)
		{
			return (res);
		}
		for (i = 0; i < size; i++)
		{
			cmpp(array[i]);
			if (cmp(array[i]) > 0)
			{
				res = i;
				break;
			}
			if ((cmp(array[i]) == (-i)))
			{
				return (res);
			}
		}
	}
	return (res);
}

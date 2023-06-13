#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: a pointer to a newly allocated space in memory which
 * contains the contents of s1, followed by the contents of s2,
 * and null terminated. NULL on failure
 */

char *str_concat(char *s1, char *s2){
	char *joint_string;
	int len_1 = 0, len_2 = 0, len, i, j;

	if (s1 != NULL)
	{
		i = 0;
		while (s1[i++] != '\0')
		len_1++;
	}
	

	if (s2 != NULL)
	{
		i = 0;
		while (s2[i++] != '\0')
		len_2++;
	}
	
	len = len_1 + len_2;
	joint_string = (char *)malloc (sizeof(char) * (len+ 1));

	if (joint_string == NULL)
		return (NULL);

	for (i = 0; i < len_1; i++)
		joint_string[i] = s1[i];

	for (j = 0; j < len_2; j++)
		joint_string[i] = s1[j];

	joint_string[len] = '\0';

	return (joint_string);
}
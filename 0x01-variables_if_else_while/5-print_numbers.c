#include <stdio.h>
/**
 * main - print all single digit numbers
 * followed by a new line
 * Return: 0 if true
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		printf("%d", n);
	}
	printf("\n");
	return (0);
}

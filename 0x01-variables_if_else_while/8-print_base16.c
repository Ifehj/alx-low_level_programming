#include <stdio.h>
/**
 * main - printing all numbers of base 16 in lower case
 * Return: 0 if true
 */
int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	for (c = 'a'; c <= 'f'; c++);
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}

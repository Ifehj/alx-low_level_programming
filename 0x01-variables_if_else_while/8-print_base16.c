#include <stdio.h>
/**
 * main - printing all numbers of base 16 in lower case
 * Return: 0 if true
 */
int main(void)
{
	char c;
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		putchar(n);
	}
	
	for (c = 'a'; c <= 'f'; c++);
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}

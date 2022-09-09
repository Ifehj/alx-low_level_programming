#include <stdio.h>
/**
 * main - prints the lower case alhabets in reverse
 * Return: 0 if true
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

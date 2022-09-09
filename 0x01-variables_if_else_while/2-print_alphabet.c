#include <stdio.h>
/**
 * main - print the 24 alphabets
 *
 * Retur: 0 if true
 */
int main(void)
{
	char ch;

	for (ch ='a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}

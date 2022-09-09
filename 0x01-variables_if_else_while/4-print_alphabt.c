#include <stdio.h>
/**
 * main - prints alphabet in lower case except q and e
 * Return: 0 if true
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return(0);
}

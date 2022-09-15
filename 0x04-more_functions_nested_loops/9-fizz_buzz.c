#include <stdio.h>`

/**
 * main - program that prints either number, fuzz, buzz or fizzbuzz
 *
 *
 * Return: returns 0
 */

int main(void)
{
	int num = 1;
	
	for ( ; num < 100; num++)
	{
		if ((num % 3 == 0) && (num % 5))
		{
			printf("FizzBuzz ");
		}
		else if ((num % 3) == 0)
		{
			printf("Fizz ");
		}
		else if ((num % 5) == 0)
		{
			if (num != 100)
			{
				printf("Buzz ");
			}
			else
			{
				printf("Buzz");
			}
		}
		else
		{
			printf("%d ", num);
		}
	}
	printf("\n");

	return (0);
}

#include <stdio.h>

/**
 * main - prints the name of the progra
 * followed by a new line
 * @argc: number of arguments passed to the function
 * @argv: argument vector of pointer to string
 * Return: 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}

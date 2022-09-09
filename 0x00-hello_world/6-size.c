#include<stdio.h>
/**
 * main-is the entry point for the program
 * Return:zero if no error, non-zero if error
 */
int main(void)
{
	printf("Size of a char: %i bytes(s)\n", sizeof(char));
	printf("Size of an int: %ld bytes(s)\n", sizeof(int));
	printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %ld bytes(s)\n", sizeof(long long int));
	printf("Size of a float: %ld byte(s)\n", sizeof(float));
	return (0);
}

#include<stdio.h>
/**
 * main-is the entry point for the program
 *
 * Return:zero if no error, non-zero if error
 *
 */
int main(void)
{
	printf("size of a char:%ld bytes(s)\n",sizeof(char));
	printf("size of an int :%ld bytes(s)\n",sizeof(int));
	printf("size of a long int:%ld bytes(s)\n",sizeof(long int));
	printf("size of a long long int:%ld bytes(s)\n",sizeof(long long int));
	printf("size of a float:%ld bytes(s)\n",sizeof(float));
	return (0);
}

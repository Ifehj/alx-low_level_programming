#include <unistd.h>

/**
* _putchar - writes the charater c to stdout
* @c : the charater to print
* 
* On error -1 is returned
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

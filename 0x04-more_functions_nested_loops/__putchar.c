#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes tha charachter c to stdout
 * @c: The charachter to print
 *
 * Return: On succes 1.
 * On error, -1 is returned, and errno is set appropiately.
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

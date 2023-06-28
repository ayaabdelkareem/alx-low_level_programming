#include "main.h"

/**
 * print_rev - prints reversed string, followed by a newline
 * @s: pointer to hte string to print
 * Return: void
*/

void print_rev(char *s)
{
	int i = 0;

	while (s[i])
		i++;

	while (i--)
	{
		_putchr(s[i]);
	}
	_putchar('\n');
}

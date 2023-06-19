#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: A C program that prints with  printf function
 *
 * Return: alaways 0 (success)
*/

int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch == 'e' || ch == 'q')
			ch++;
		putchar(ch);
		ch++;
	}
	putchar('\n');

	return (0);
}

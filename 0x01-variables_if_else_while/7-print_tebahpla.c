#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphabet in lowercase and in revers
 *
 * Return: alaways 0 (success)
*/

int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');

	return (0);
}

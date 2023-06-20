#include <stdio.h>

/**
 * main - Entry point
 *
 * Description: print all single digit numbers
 *
 * Return: alaways 0 (success)
*/

int main(void)
{
	char digit = 0;

	while (digit <= 9)
	{
		/*convert digit to ASCII representation*/
		purchar(digit + '0');
		digit++;
	}
	putchar('\n');

	return (0);
}

#include <stdio.h>
#include <stdlib.h>

/**
 * main - print sum of 2 number.
 * @argc:number of commadline arguments.
 * @argv:pointer to an array of command line arguments.
 * Return: 0-success, non-zero-fail.
*/

int main(int argc, char *argv[])
{
	int sum;

	if (argc == 3)
	{
		sum = atoi(argv[1]) * atoi(argv[2]);
		pritf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}

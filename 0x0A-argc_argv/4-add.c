#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - add the arguments and output to stdout
 * @argc: counter argument
 * @argv: vector argument
 *
 * Return: 0 on success,
 *	1, on failure
 */
int main(int argc, char **argv)
{
	int i, j, sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		j = atoi(argv[i]);
		if (j != 0)
		{
			sum += j;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}

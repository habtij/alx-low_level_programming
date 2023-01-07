#include "main.h"
#include <stdio.h>

/**
 * main - multiplies argument and print to stdout
 * @argc: counter argument
 * @argv: vector argument
 *
 * Return: 0 on success,
 *	1 on failure
 */
int main(int argc, char **argv)
{
	int mul = 1, i;

	if (argc < 1)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 0; i < argc; i++)
	{
		mul *= atoi(argv[i]);
	}
	printf("%d\n", mul);
	return (0);
}

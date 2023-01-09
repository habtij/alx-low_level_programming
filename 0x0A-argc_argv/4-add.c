#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <errno.h>

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
	int i, num, sum = 0;
	long conv;
	char *p;

	errno = 0;
	if (argc == 1)
	{
		printf("%d\n", 0);
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		/*
		 * Better explained by Sir Luc, comment no 2
		 * https://stackoverflow.com/questions
		 *	/9748393/how-can-i-get-argv-as-int
		 */
		conv = strtol(argv[i], &p, 10);
		if (*p != '\0')
		{
			printf("Error\n");
			return (1);
		}
		else
		{
			num = conv;
			sum += num;
		}
	}
	printf("%d\n", sum);
	return (0);
}

#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints it opcode
 * @argc: Counter argument
 * @argv: vector argument
 *
 * Return: Always (0);
 */
int main(int argc, char *argv[])
{
	int i, n_bytes;
	char *arr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	n_bytes = atoi(argv[1]);
	if (n_bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	arr = (char *)main;
	for (i = 0; i < n_bytes; i++)
	{
		if (i == (n_bytes - 1))
		{
			printf("%02hhx\n", arr[i]);
			break;
		}
		printf("%02hhx ", arr[i]);
	}
	return (0);
}

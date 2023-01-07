#include "main.h"
#include <stdio.h>

/**
 * main - print my file name
 * @argc: counter argument
 * @argv: vector argument
 *
 * Return: Always (0);
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[argc - 1]);
	return (0);
}

#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints binary representation of n
 * @n: argument
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	while (n)
	{
		if (n & 1)
		{
			printf(1);
		}
		else
		{
			printf(0);
		}
		n >>= 1;
	}
}

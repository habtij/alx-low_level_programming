#include "main.h"

/**
 * print_diagonal - Prints \ in n number of times
 * @n: first argument
 *
 * Return: void
 */
void print_diagonal(int n)
{
	int i = 1, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	while (i <= n)
	{
		for (j = 1; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
}

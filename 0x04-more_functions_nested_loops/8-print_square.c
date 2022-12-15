#include "main.h"

/**
 * print_square - Prints # as a square n number
 * @n: first argument
 *
 * Return: void
 */
void print_square(int n)
{
	int i = 1, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	while (i <= n)
	{
		for (j = 1; j <= n; j++)
		{
			_putchar('#');
		}
		_putchar('\n');
		i++;
	}
}

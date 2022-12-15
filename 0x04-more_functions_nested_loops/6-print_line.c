#include "main.h"

/**
 * print_line - Print _ in n number of times
 * @n: integer argument
 *
 * Return: void
 */
void print_line(int n)
{
	int i = 1;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	while (i <= n)
	{
		_putchar('_');
		i++;
	}
	_putchar('\n');
}

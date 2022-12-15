#include "main.h"

/**
 * print_line - Print _ in n number of times
 * @n: integer argument
 *
 * Return: void
 */
void print_line(int n)
{
	if (n <= 0)
		_putchar('\n');

	while (n--)
		_putchar('_');

	_putchar('\n');
}

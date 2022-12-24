#include "main.h"
#include <limits.h>

/**
 * print_number - Print integer argument
 * @n: argument
 *
 * Return: void
 */
void print_number(int n)
{
	if (n < 0 && n != INT_MIN)
	{
		_putchar('-');
		n = n * -1;
	}

	if (n / 10)
		print_number(n / 10);

	_putchar(n % 10 + '0');
}

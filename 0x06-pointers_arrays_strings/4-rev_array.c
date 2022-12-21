#include "main.h"

/**
 * print_number - helper function
 * @n: first argument
 *
 * Return: void
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10)
	{
		print_number(n / 10);
	}
	_putchar(n % 10 + '0');
}

/**
 * reverse_array - reverses the content of an array of integers
 * @a: first argument
 * @n: second argument
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = n - 1; i >= 0; i--)
	{
		print_number(a[i]);
		if (i != 0)
		{
			_putchar(',');
			_putchar(' ');
		}
	}
	_putchar('\n');
}

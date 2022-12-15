#include "main.h"

/**
 * print_triangle - print a triangle with # symbol from size
 * @size: argument
 *
 * Return: void
 */
void print_triangle(int size)
{
	int i = 1, j, k;
	int num = size;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	while (i <= size)
	{
		for (j = num; j > 1; j--)
		{
			_putchar(' ');
		}
		for (k = 1; k <= i; k++)
		{
			_putchar('#');
		}
		_putchar('\n');
		num--;
		i++;
	}
}

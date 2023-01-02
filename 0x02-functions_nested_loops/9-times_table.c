#include "main.h"

/**
 * print_number - prints number above 10 with putchar
 * @n: argument
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
		print_number(n / 10);

	_putchar(n % 10 + '0');
}

/**
 * times_table - Prints times table
 *
 * Return: void
 */
void times_table(void)
{
	int i;
	int j = 0;
	int mul;

	while (j <= 9)
	{
		for (i = 0; i <= 9; i++)
		{
			mul = j * i;
			print_number(mul);

			if (i != 9)
			{
				_putchar(',');
				_putchar(' ');

				if (mul >= 0 && mul <= 9)
				{
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
		j++;
	}
}

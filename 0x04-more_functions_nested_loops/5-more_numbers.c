#include "main.h"

/**
 * print - helper function
 * @n: first argument
 *
 * Return: void
 */
void print(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = n * -1;
	}

	if (n / 10)
		print(n / 10);

	_putchar(n % 10 + '0');
}

/**
 * more_numbers - Prints 10 times the number from 0 to 14
 *
 * Return: void
 */
void more_numbers(void)
{
	int n = 0, i;

	while (n <= 9)
	{
		for (i = 0; i <= 14; i++)
			print(i);
		_putchar('\n');
		n++;
	}
}

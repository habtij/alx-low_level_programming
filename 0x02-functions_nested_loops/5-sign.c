#include "main.h"

/**
 * print_sign - Check the state of a number
 * @n: Argument
 *
 * Return: 1 on Success.
 * On error, 0 is returned.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	_putchar('0');
	return (0);
}

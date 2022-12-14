#include "main.h"

/**
 * print_last_digit - Prints the last digits of an argument
 * @n: Argument
 *
 * Return: Integer
 */
int print_last_digit(int n)
{
	int last_digit;

	if (n < 0)
		n *= -1;

	last_digit = n % 10;
	_putchar('0' + last_digit);
	return (last_digit);
}

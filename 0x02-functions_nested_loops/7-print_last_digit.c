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

	last_digit = n % 10;
	_putchar(last_digit + '0');
	return (last_digit);
}

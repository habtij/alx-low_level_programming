#include "main.h"

/**
 * print_number - Prints numbers
 *
 * Return: void
 */
void print_number(void)
{
	int n;

	for (n = '0'; n <= '9'; n++)
	{
		_putchar(n);
	}
	_putchar('\n');
}

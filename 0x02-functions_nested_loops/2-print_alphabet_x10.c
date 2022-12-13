#include "main.h"

/**
 * print_alphabet - Prints alphabet to stdout
 *
 * Return: no value
 */
void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

/**
 * print_alphabet_x10 - Prints alphabets ten times on a new line
 *
 * Return: no value
 */

void print_alphabet_x10(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		print_alphabet();
	}
}

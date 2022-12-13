#include "main.h"

/**
 * print_alphabet - Prints alphabet to stdout
 *
 * Return: No value
 */
void print_alphabet(void)
{
	int alpha;
	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
	return;
}

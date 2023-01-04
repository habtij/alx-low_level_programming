#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: pointer argument
 *
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	while (*s)
	{
		_putchar(*s);
		s++;
	}
	_putchar('\n');
}

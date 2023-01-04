#include "main.h"

/**
 * _puts_recursion - prints a string followed by a new line
 * @s: pointer argument
 *
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
		_putchar('\n');

	_putchar(*s);
	if (*s != '\0')
	{
		s++;
		_puts_recursion(s);
	}
}

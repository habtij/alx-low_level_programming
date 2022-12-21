#include "main.h"

/**
 * puts_half - print the second half of the string
 * @str: pointer argument
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i, j, half, len = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}

	if ((len) % 2 != 0)
	{
		_putchar(str[len - 1]);
	}
	else
	{
		half = len / 2;
		for (j = half; str[j] != '\0'; j++)
		{
			_putchar(str[j]);
		}
	}
	_putchar('\n');
}
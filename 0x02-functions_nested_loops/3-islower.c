#include "main.h"

/**
 * _islower - Checks if arg c is lowercase
 * @c: Argument.
 *
 * Return: 1 on success.
 * On error, 0 is printed.
 */
int _islower(int c)
{
	int ch;
	int val;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (c == ch)
		{
			val = 1;
			break;
		}
		else
		{
			val = 0;
			break;
		}
	}
	return (val);
}

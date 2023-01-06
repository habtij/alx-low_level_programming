#include "main.h"

/**
 * _islower - Checks if arg c is lowercase
 * @c: Argument.
 *
 * Return: 1 on success.
 * On error, 0 is returned.
 */
int _islower(int c)
{
	int ch;
	int val = 0;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (c == ch)
		{
			val = 1;
			break;
		}
	}
	return (val);
}

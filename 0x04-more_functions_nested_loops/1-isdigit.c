#include "main.h"

/**
 * _isdigit - Checks if argument c is digit
 * @c: integer argument
 *
 * Return: 1 on success
 * On error, 0 is returned.
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
	{
		return (1);
	}
	return (0);
}

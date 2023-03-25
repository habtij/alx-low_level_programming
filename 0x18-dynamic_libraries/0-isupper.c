#include "main.h"

/**
 * _isupper - Checks if argument c is uppercase
 * @c: integer argument
 *
 * Return: 1 on success
 * On error, 0 is returned
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}

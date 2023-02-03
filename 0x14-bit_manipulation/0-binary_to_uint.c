#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - converts from binary number to unsigned int
 * @b: string argument
 *
 * Return: converted value, or
 * 0 if one or more characters are found or NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0, k = 1;
	int len = 0;

	if (b == NULL)
		return (0);

	while (b[len] != '\0')
	{
		len++;
	}

	while (len >= 0)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		if (b[len] == '1')
			res += k;
		k *= 2
		len--;
	}
	return (res);
}

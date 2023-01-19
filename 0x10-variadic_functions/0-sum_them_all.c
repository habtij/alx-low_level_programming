#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - sum al of its arguments
 * @n: first argument
 *
 * Return: integer
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum = 0;

	if (n == 0)
		return (0);

	va_start(args, n);
	for (i = 1; i <= n; i++)
	{
		sum += va_arg(args, unsigned int);
	}
	va_end(args);
	return (sum);
}

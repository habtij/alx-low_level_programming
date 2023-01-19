#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - a function that prints strings, followed by a new line.
 * @separator: a separator
 * @n: variadic argument
 *
 * Return: nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str;
	unsigned int i;
	char *s;

	va_start(str, n);
	for (i = 1; i <= n; i++)
	{
		s = va_arg(str, char *);
		if (s == NULL)
		{
			s = "(nil)";
		}
		printf("%s", s);
		if (i != n && separator != NULL)
			printf("%s", separator);
	}
	va_end(str);
	printf("\n");
}

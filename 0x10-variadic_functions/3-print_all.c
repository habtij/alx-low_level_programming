#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * check_format - helper function for checking type of format
 * @a: a va_list type argument
 * @c: format to check
 *
 * Return: nothing
 */
void check_format(va_list a, char c)
{
	int int_n;
	double f_n;
	char c_val;
	char *s_val;

	switch (c)
	{
	case 'c':
		c_val = va_arg(a, int);
		printf("%c", c_val);
		break;
	case 'i':
		int_n = va_arg(a, int);
		printf("%d", int_n);
		break;
	case 'f':
		f_n = va_arg(a, double);
		printf("%f", f_n);
		break;
	case 's':
		s_val = va_arg(a, char *);
		if (s_val == NULL)
			s_val = "(nil)";

		printf("%s", s_val);
		break;
	}
}

/**
 * print_all - a function that prints anything.
 * @format: variadic argument
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i, len;

	if (format != NULL)
	{
		len = strlen(format);
	}
	i = 0;
	va_start(args, format);
	while (i < len)
	{
		check_format(args, format[i]);
		if (i != (len - 1) && (format[i] == 'c' || format[i] == 'i'
				|| format[i] == 'f' || format[i] == 's'))
			printf(", ");
		i++;
	}
	va_end(args);
	printf("\n");
}

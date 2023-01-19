#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
#include <string.h>

/**
 * print_all - a function that prints anything.
 * @format: variadic argument
 *
 * Return: nothing
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i, int_n, len;
	double f_n;
	char c_val;
	char *s_val;

	len = strlen(format);
	i = 0;
	va_start(args, format);
	while (i < len)
	{
		switch (format[i])
		{
		case 'c':
			c_val = va_arg(args, int);
			printf("%c", c_val);
			break;
		case 'i':
			int_n = va_arg(args, int);
			printf("%d", int_n);
			break;
		case 'f':
			f_n = va_arg(args, double);
			printf("%f", f_n);
			break;
		case 's':
			s_val = va_arg(args, char *);
			if (s_val == NULL)
			{
				s_val = "(nil)";
			}
			printf("%s", s_val);
			break;
		}
		if (i != (len - 1) && (format[i] == 'c' || format[i] == 'i'
				|| format[i] == 'f' || format[i] == 's'))
			printf(", ");
		i++;
	}
	va_end(args);
	printf("\n");
}

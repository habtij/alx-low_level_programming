#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - a function that prints numbers, followed by a new line.
 * @separator: a separator argument
 * @n: variadic argument
 *
 * Return: nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;
	int num;

	if (separator != NULL)
	{
		va_start(nums, n);
		for (i = 1; i <= n; i++)
		{
			num = va_arg(nums, int);
			printf("%d", num);
			if (i != n)
				printf("%s", separator);
		}
		va_end(nums);
		printf("\n");
	}
}

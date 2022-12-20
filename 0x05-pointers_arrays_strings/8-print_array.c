#include "main.h"
#include <stdio.h>

/**
 * print_array - Prints an n elements of an arrays of integer
 * @a: first argument
 * @n: second argument
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}

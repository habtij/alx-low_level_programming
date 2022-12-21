#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @a: first argument
 * @n: second argument
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;

	for (i = n - 1; i >= 0; i--)
	{
		printf("%d", i);
		if (i != 0)
			printf(", ");
	}
	putchar('\n');
}

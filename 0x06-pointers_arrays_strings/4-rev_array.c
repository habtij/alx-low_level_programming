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
	int i, temp;

	for (i = (n - 1); i >= 0; i--)
	{
		a[n - i] = a[i];
	}
}

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
	int i, j;
	int nums[98];

	for (i = n, j = 0; i >= 0; i--, j++)
	{
		nums[j] = a[i];
	}

	*a = nums;
}

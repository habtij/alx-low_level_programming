#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a
 *	square matrix of integers
 * @a: address memory of first argument
 * @size: second argument
 *
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int right_sum = 0, left_sum = 0, i, j;

	j = size - 1;
	for (i = 0; i < size; i++)
	{
		left_sum += *(a + i);
		right_sum += *(a + j);
		j--;
	}
	printf("%d, %d", left_sum, right_sum);
}

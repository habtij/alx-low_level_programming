#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers.
 * @min: minimum value of array
 * @max: maximum value of array
 *
 * Return: pointer to an integer array
 */
int *array_range(int min, int max)
{
	int i;
	int *arr;

	if (min > max)
	{
		return (NULL);
	}

	arr = malloc(sizeof(int) * max + 1);
	if (arr == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (min <= max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}

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
	int i, count = 0;
	int *arr;

	if (min > max)
	{
		return (NULL);
	}

	while (min <= max)
	{
		count++;
		min++;
	}

	arr = malloc(sizeof(int) * count + 1);
	if (arr == NULL)
		return (NULL);

	i = 0;
	while (min <= max)
	{
		arr[i] = min;
		min++;
		i++;
	}
	return (arr);
}

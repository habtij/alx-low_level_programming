#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - a function that returns a pointer to a
 *	2 dimensional array of integers.
 * @width: first argument
 * @height: second argument
 *
 * Return: 2 dimensional array
 */
int **alloc_grid(int width, int height)
{
	int num = 0, i, j;
	int **p;

	/* Checking if either or both are 0 */
	if ((width <= 0 || height <= 0) || (width <= 0 && height <= 0))
	{
		return (NULL);
	}

	p = (int **)malloc(height * sizeof(int *));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		p[i] = (int *)malloc(width * sizeof(int));
		if (p[i] == NULL)
		{
			free(p);
			for (j = 0; j <= i; j++)
				free(p[j]);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			p[i][j] = num;
		}
	}
	return (p);
}

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

	if (width <= 0 || height <= 0)
		return (NULL);

	p = (int **)malloc(sizeof(int *) * height);
	if (p != NULL)
	{
		for (i = 0; i < height; i++)
		{
			p[i] = (int *)malloc(sizeof(int) * width);
		}
	}
	i = 0;
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			if (p[i] != NULL)
			{
				p[i][j] = num;
			}
		}
	}

	return (p);
	for (i = 0; i < height; i++)
	{
		free(p[i]);
	}
	free(p);
}

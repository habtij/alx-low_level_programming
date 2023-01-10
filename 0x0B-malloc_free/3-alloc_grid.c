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
	int *b;

	if (width <= 0)
	{
		return (NULL);
	}

	if (height <= 0)
	{
		return (NULL);
	}

	p = malloc(sizeof(int *) * height);
	b = malloc(sizeof(int) * height * width);
	if (p != NULL && b != NULL)
	{
		for (i = 0; i < height; i++)
		{
			p[i] = &b[i * width];
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
	free(b);
	free(p);
}

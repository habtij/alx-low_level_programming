#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - a function that creates an array of chars,
 *	and initializes it with a specific char.
 * @size: size of array
 * @c: constant character
 *
 * Return: pointer to array on success,
 *	or NULL on failure
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *p;

	if (size == 0)
	{
		return (NULL);
	}

	p = malloc(size);
	if (p != NULL)
	{
		for (i = 0; i < size; i++)
		{
			p[i] = c;
		}
	}
	return (p);
}

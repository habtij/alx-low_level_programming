#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - a function that allocates memory for an array, using malloc
 * @nmemb: number of member
 * @size: size argument
 *
 * Return: pointer to an array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	memset(&p, 0, (nmemb * size));
	return (p);
}

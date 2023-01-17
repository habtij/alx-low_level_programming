#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_dog - a function that free a struct dog
 * @d: struct pointer
 *
 * Return: nothing
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d);
	}
}

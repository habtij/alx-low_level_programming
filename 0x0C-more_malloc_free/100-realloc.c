#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - a function that reallocates a memory block using malloc and free
 * @ptr: a pointer argument
 * @old_size: old size memory alloc'd
 * @new_size: new size of memory alloc'd
 *
 * Return: nothing
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *str;

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (new_size > old_size || ptr == NULL)
	{
		str = malloc(new_size);
		if (str == NULL)
		{
			return (NULL);
		}

		if (ptr == NULL)
		{
			return (str);
			free(str);
		}

		/* memset(str, ptr, new_size); */
	}
	free(str);
	return (str);
}

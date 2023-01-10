#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - a function that returns a pointer to a newly allocated space in
 *	memory, which contains a copy of the string given as a parameter.
 * @str: pointer argument
 *
 * Return: pointer on success, or NULL on failure
 */
char *_strdup(char *str)
{
	int i, len;
	char *p;

	len = strlen(str);
	if (str != '\0')
		return (NULL);

	if (len == 1)
		return (NULL);

	p = malloc(sizeof(char) * len + 1);
	if (p != NULL)
	{
		for (i = 0; i < len; i++)
		{
			p[i] = str[i];
		}
	}
	return (p);
	free(p);
}

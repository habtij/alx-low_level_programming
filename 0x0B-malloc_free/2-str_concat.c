#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * str_concat - a function that concatenates two strings.
 * @s1: first argument pointer
 * @s2: second argument pointer
 *
 * Return: pointer on success, or NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	int len1, len2;
	char *p;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}

	len1 = strlen(s1);
	len2 = strlen(s2);
	p = malloc(sizeof(char) * (len1 + len2) + 1);
	p = strcat(p, s1);
	p = strcat(p, s2);
	p[len1 + len2 + 1] = '\0';

	return (p);
	free(p);
}

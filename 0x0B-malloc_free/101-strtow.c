#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * strtow - a function that splits a string into words
 * @str: pointer to a string
 *
 * Return: pointer to an array
 */
char **strtow(char *str)
{
	int i, len = 0;
	char **p;

	if (str[0] == NULL || str == "")
		return (NULL);

	len = strlen(str
}

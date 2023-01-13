#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - a function that concatenates two strings.
 * @s1: first string pointer
 * @s2: second string pointer
 * @n: number of byte to copy from s2
 *
 * Return: string pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2;
	char *str;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n > len2)
		n = len2;

	str = malloc(sizeof(char) * len1 + n);
	if (str == NULL)
		return (NULL);

	str = strcat(str, s1);
	str = strncat(str, s2, n);
	str[len1 + n] = '\0';

	return (str);
}

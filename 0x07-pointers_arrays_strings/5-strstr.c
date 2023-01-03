#include "main.h"
#include <stddef.h>

/**
 * _strstr - locates a substring
 * @haystack: first argument
 * @needle: second argument
 *
 * Return: char
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '\0')
	{
		char *h = haystack;
		char *n = needle;

		while (*h == *n && *n != '\0')
		{
			h++;
			n++;
		}

		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}

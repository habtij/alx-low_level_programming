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
	int i;
	for (i = 0; needle[i] != '\0'; i++)
	{
		while (*haystack != '\0')
		{
			if (needle[i] == *haystack)
			{
				return ((char *) haystack);
			}
			haystack++;
		}
		needle++;
	}
	return (NULL);
}

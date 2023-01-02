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
	while (*needle != '\0')
	{
		while (*haystack != '\0')
		{
			if (*needle == *haystack)
			{
				return ((char *) haystack);
			}
			haystack++;
		}
		needle++;
	}
	return (NULL);
}

#include "main.h"
#include <stddef.h>

/**
 * _strchr - locates a character in a string
 * @s: address of memory iterate
 * @c: charater to locate
 *
 * Return: char
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return ((char *) s);
		}
		s++;
	}

	if (*s == '\0')
	{
		return ((char *) s);
	}
	else
	{
		return (NULL);
	}
}

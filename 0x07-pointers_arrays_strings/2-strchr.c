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
	int i, j, len = 0;
	char str[98];

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}

	i = 0;
	while (i < (len + 2))
	{
		if (c == s[i])
		{
			j = i;
			break;
		}
		else
		{
			return (NULL);
		}
		i++;
	}
	return (s);
}

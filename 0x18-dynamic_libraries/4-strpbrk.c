#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - that searches a string for any of a set of bytes
 * @s: first argument
 * @accept: second argument
 *
 * Return: char
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s != '\0')
	{
		for (i = 0; accept[i] != '\0'; i++)
		{
			if (*s == accept[i])
			{
				return ((char *) s);
			}
		}
		s++;
	}
	return (NULL);
}

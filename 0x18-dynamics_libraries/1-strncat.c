#include "main.h"

/**
 * _strncat - concatenate string starting from n
 * @dest: first argument
 * @src: second argument
 * @n: third argument
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j, len = 0;

	for (i = 0; dest[i] != '\0'; i++)
	{
		len++;
	}

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[len + j] = src[j];
	}
	return (dest);
}

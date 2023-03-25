#include "main.h"

/**
 * _strncpy - copies str poited to by src, to the buffer pointed to by dest
 * @dest: first argument
 * @src: second argument
 * @n: third argument
 *
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}

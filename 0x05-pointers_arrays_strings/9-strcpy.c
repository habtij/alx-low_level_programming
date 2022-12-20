#include "main.h"

/**
 * _strcpy - copy string pointed to by src, including the null byte,
 * into the dest
 * @src: first argument
 * @dest: second argument
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, j, len = 0, total_arr_len;

	for (i = 0; src[i] != '\0'; i++)
	{
		len++;
	}

	/* length of array src with include '\0' */
	total_arr_len = len + 1;

	for (j = 0; j < total_arr_len; j++)
	{
		dest[j] = src[j];
	}
	return (dest);
}

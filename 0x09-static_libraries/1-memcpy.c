#include "main.h"

/**
 * _memcpy - copies n bytes from memory area src to memory area dest
 * @dest: adress of memory to store value
 * @src: address of memory to copy from
 * @n: size of memory to replace
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}

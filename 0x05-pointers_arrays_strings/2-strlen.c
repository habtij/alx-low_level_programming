#include "main.h"

/**
 * _strlen - Get the length of argument
 * @s: pointer argument
 *
 * Return: length of argument.
 */
int _strlen(char *s)
{
	int i, len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}
	return (len);
}

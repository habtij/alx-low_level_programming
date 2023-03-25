#include "main.h"
/**
 * _atoi - prints
 * @s: argument
 *
 * Return: integer
 */
int _atoi(char *s)
{
	int i = 0;

	while (*s != '\0')
	{
		i++;
		s++;
	}
	return (i);
}

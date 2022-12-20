#include "main.h"

/**
 * rev_string - reverse a string pointer
 * @s: pointer argument
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, j, k, len = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}

	k = 0;
	for (j = (len - 1); j >= 0; j--)
	{
		s[k] = s[j];
		k++;
	}
}

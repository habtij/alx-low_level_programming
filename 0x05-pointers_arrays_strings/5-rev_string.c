#include "main.h"

/**
 * rev_string - reverse a string pointer
 * @s: pointer argument
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, j, len = 0;
	char t;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}


	for (j = 0; j <= len; j++)
	{
		t = s[j];
		s[j] = s[len];
		s[len] = t;
	}
}

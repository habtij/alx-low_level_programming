#include "main.h"

/**
 * rev_string - reverse a string pointer
 * @s: pointer argument
 *
 * Return: void
 */
void rev_string(char *s)
{
	int i, j, len = 0, l;
	char t;

	for (i = 0; s[i] != '\0'; i++)
	{
		len++;
	}

	l = len;

	for (j = 0; j <= (len - 1) / 2; j++)
	{
		t = s[j];
		s[j] = s[l - j - 1];
		s[l - j - 1] = t;
	}
}

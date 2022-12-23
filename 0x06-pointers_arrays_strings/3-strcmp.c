#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: first argument
 * @s2: second argument
 *
 * Return: integer
 */
int _strcmp(char *s1, char *s2)
{
	int i, j, k, s1_len = 0, s2_len = 0;

	for (i = 0; s1[i] != '\0'; i++)
		s1_len++;

	for (j = 0; s2[j] != '\0'; j++)
		s2_len++;

	if (s1_len != s2_len)
	{
		if (s1_len > s2_len)
		{
			return ((int)(unsigned char)s1[0] - (int)(unsigned char)s2[0]);
		}
		else
		{
			return ((int)(unsigned char)s1[0] - (int)(unsigned char)s2[0]);
		}
	}
	else
	{
		for (k = 0; k <= s1_len; k++)
		{
			if (s1[k] != s2[k])
				return ((int)(unsigned char)s1[0] -
						(int)(unsigned char)s2[0]);
		}
	}
	return (0);
}

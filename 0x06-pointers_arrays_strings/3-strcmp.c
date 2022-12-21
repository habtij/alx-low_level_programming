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
	int i, j, s1_len = 0, s2_len = 0;
	int diff;

	for (i = 0; s1[i] != '\0'; i++)
	{
		s1_len++;
	}

	for (j = 0; s2[j] != '\0'; j++)
	{
		s2_len++;
	}

	if (s1_len == s2_len)
	{
		for (i = 0; i < s1_len; i++)
		{
			if (s1[i] != s2[i])
			{
				diff = s1[s1_len] - s2[s2_len];
				break;
			}
		}
	}
	return (diff);
}

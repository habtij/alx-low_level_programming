#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: Argument
 *
 * Return: char
 */
char *leet(char *s)
{
	char val[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char num[] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; val[j] != '\0'; j++)
		{
			if (val[j] == s[i])
			{
				s[i] = num[j];
			}
		}
	}
	return (s);
}

#include "main.h"

/**
 * leet - encodes a string into 1337
 * @s: Argument
 *
 * Return: char
 */
char *leet(char *s)
{
	char val[11] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char num[11] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 11; j++)
		{
			if (s[i] == val[j])
			{
				*(s + i) = num[j];
			}
		}
	}
	return (s);
}

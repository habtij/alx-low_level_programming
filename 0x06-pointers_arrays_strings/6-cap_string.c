#include "main.h"

/**
 * cap_string - capitalize all words of a string
 * @s: argument
 *
 * Return: char
 */
char *cap_string(char *s)
{
	int i, j;
	char sep[13] = {' ', ',', '\t', '\n', ';', '.', '!', '?', '(', ')', '{', '}'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (s[i] == sep[j] && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
			{
				*(s + (i + 1)) = (unsigned char)*(s + (i + 1)) - 32;
			}
			else
			{
				i++;
				*(s + (i + 1)) = (unsigned char)*(s + (i + 1)) - 32;
			}
		}
	}
	return (s);
}

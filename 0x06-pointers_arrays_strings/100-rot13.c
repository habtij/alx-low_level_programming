#include "main.h"

/**
 * rot13 - encodes string using rot13
 * @s: argument
 *
 * Return: char
 */
char *rot13(char *s)
{
	int i, j;
	char p1[] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K',
			'L', 'M', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
			'j', 'k', 'l', 'm'};
	char p2[] = {'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V', 'W', 'X',
			'Y', 'Z', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
			'w', 'x', 'y', 'z'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 27; j++)
		{
			if (s[i] == p1[j])
			{
				s[i] = p2[j];
			}
		}
	}
	return (s);
}

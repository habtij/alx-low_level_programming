#include "main.h"

/**
 * string_toupper - changes all lowercase letters to uppercase
 * @s: char argument
 *
 * Return: char
 */
char *string_toupper(char *s)
{
	int i, j;
	char upper[26] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J', 'K',
			'L', 'M', 'N', 'O', 'P', 'Q', 'R', 'S', 'T', 'U', 'V',
			'W', 'X', 'Y', 'Z'};
	char lower[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k',
			'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v',
			'w', 'x', 'y', 'z'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j <= 26; j++)
		{
			if (lower[j] == s[i])
				*(s + i) = upper[j];
		}
	}
	return (s);
}

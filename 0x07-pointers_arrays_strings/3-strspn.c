#include "main.h"

/**
 * _strspn - gets the length of prefix substring
 * @s: address of memory to search
 * @accept: address of memory to confirm
 *
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int i, j;

	for (i = 0; accept[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (accept[i] == s[j])
			{
				n++;
				break;
			}
		}
	}
	return (++n);
}

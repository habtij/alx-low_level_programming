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

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				n++;
				break;
			}
		}
	}
	return (n);
}

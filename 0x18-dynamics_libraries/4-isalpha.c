#include "main.h"

/**
 * __islower - Checks if arg is in lowercase
 * @c: Argument
 *
 * Return: 1 on Sucess.
 * On error, 0 is returned.
 */
int __islower(int c)
{
	int ch;
	int val = 0;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		if (c == ch)
		{
			val = 1;
			break;
		}
	}
	return (val);
}

/**
 * _isalpha - Check if arguments is an alphabet
 * @c: Argument
 *
 * Return: 1 on Success.
 * On error, 0 is returned.
 */
int _isalpha(int c)
{
	int ch;
	int val = 0;

	for (ch = 'A'; ch <= 'Z'; ch++)
	{
		if (__islower(c) == 1 || c == ch)
		{
			val = 1;
			break;
		}
	}
	return (val);
}

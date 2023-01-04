#include "main.h"

/**
 * factorial - returnd factorial of a given number
 * @n: argument
 *
 * Return: Integer
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);

	if (n == 0 || n == 1)
		return (1);

	return (n * factorial(n - 1));
}

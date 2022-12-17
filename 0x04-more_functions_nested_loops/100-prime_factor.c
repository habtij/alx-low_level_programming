#include "main.h"
#include <stdio.h>
#include <math.h>

/**
 * prime_factor - Prints largest prime factor
 * @n: Argument
 *
 * Return: void
 */
void prime_factor(long n)
{
	int max_prime, i;

	while (n % 2 == 0)
	{
		max_prime = 2;
		n /= 2;
	}

	while (n % 3 == 0)
	{
		max_prime = 3;
		n /= 3;
	}

	for (i = 5; i <= sqrt(n); i += 6)
	{
		while (n % i == 0)
		{
			max_prime = i;
			n /= i;
		}

		while (n % (i + 2) == 0)
		{
			max_prime = i + 2;
			n /= i + 2;
		}
	}
	printf("%d\n", max_prime);
}

/**
 * main - Check the code
 *
 * Return: Always 0
 */
int main(void)
{
	long n = 612852475143;

	prime_factor(n);
	return (0);
}

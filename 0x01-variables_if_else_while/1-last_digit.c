#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;
	int lastInteger;

	srand(time(0));

	n = rand() - RAND_MAX / 2;
	lastInteger = n % 10;
	if (lastInteger == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, lastInteger);
	} else if (lastInteger > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, lastInteger);
	} else if (lastInteger < 6 && lastInteger != 0)
	{
		printf("Last digit of %d is %d and is less than and not 0\n", n, lastInteger);
	}
}

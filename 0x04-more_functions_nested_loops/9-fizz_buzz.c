#include <stdio.h>

/**
 * main - Prints fizz or buzz for multiples of 3, 5
 *
 * Return: Always 0
 */
int main(void)
{
	int n = 1;

	while (n <= 100)
	{
		if ((n % 3 == 0) && (n % 5 == 0))
		{
			printf("FizzBuzz");
		}
		else if (n % 3 == 0)
		{
			printf("Fizz");
		}
		else if (n % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%0d", n);
		}
		if (n != 100)
		{
			printf(" ");
		}
		n++;
	}
	printf("\n");
	return (0);
}

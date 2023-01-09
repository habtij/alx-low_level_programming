#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * iter_val - helps iterate through val
 * @val: value to reduce
 *
 * Return: integer
 */
int iter_val(int val)
{
	int i, res = 0;

	for (i = 0; i <= val; i++)
	{
		if (val >= 25)
		{
			res += val / 25;
			val = val % 25;
		}
		else if (val < 25 && val >= 10)
		{
			res += val / 10;
			val = val % 10;
		}
		else if (val < 10 && val >= 5)
		{
			res += val / 5;
			val = val % 5;
		}
		else if (val < 5 && val >= 2)
		{
			res += val / 2;
			val = val % 2;
		}
		else if (val == 1)
		{
			res += 1;
			break;
		}
	}
	return (res);
}

/**
 * main - Prints the minimum number of coins to make change
 * @argc: params count argument
 * @argv: vector argument
 *
 * Return: 0 on success,
 *	1, on failure
 */
int main(int argc, char **argv)
{
	int res = 0, cents;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("%d\n", 0);
		return (0);
	}

	res = iter_val(cents);
	printf("%d\n", res);
	return (0);
}

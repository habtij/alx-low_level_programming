#include <stdio.h>

/**
 * main - Prints fibonacci series
 *
 * Return: Always 0
 */
int main(void)
{
	int latest_val = 2, last_val = 1, i = 0;

	printf("1, 2, ");
	while (i < 98)
	{
		latest_val = latest_val + last_val;
		printf("%d", latest_val);
		last_val = latest_val - last_val;

		if (i != 97)
			printf(", ");
		i++;
	}
	printf("\n");
	return (0);
}

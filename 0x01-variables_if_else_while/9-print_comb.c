#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	char comma  = ',';

	for (num = '0'; num <= '9'; num++)
	{
		putchar(num);
		if (num != '9')
		{
			putchar(comma);
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}

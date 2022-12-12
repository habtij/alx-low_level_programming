#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num, num1;

	for (num = '0'; num < '9'; num++)
	{
		num1 = 1;
		for (; num1 <= '9'; num1++)
		{
			if (num1 != num)
			{
				putchar(num);
				putchar(num1);
				if ((num + num1) != 89)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
		num1 += 1;
	}
	putchar('\n');
	return (0);
}

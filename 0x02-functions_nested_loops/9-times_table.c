#include "main.h"

/**
 * times_table - Prints times table
 */
void times_table(void)
{
	int n = 0, i;
	int j = 0;

	while (j <= 9)
	{
		for (i = '0'; i <= '9'; i++)
		{
			_putchar(n * i + '0');
			_putchar(',');
			_putchar(' ');
		}
		n++;
		_putchar('\n');
		j++;
	}
}

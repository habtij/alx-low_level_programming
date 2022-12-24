#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 *
 * Return: void
 */
void jack_bauer(void)
{
	int j, n1, n2, n3, n4;
	n1 = '0';
	n2 = '0';
	n3 = '0';
	n4 = '0';

	for (j = 0; j < 1440; j++)
	{
		n4++;

		if (n4 > '9')
		{
			n4 = '0';
			n3++;
		}
		if (n3 > '5')
		{
			n3 = '0';
		}
		if (n3 == '5' && n4 == '9')
		{
			n2++;
		}
		if (n2 == '3' && n3 == '5' && n4 == '9')
		{
			n2 = '0';
			n1++;
		}
		if (n1 > '2')
		{
			break;
		}

		_putchar(n1);
		_putchar(n2);
		_putchar(':');
		_putchar(n3);
		_putchar(n4);
		_putchar('\n');
	}
}

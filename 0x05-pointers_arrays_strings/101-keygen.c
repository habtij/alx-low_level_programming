#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * main - Generate valid password
 *
 * Return: Always 0;
 */
int main(void)
{
	/* seed the generator */
	srand(time(0));

	char alpha[57] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
			'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r',
			's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '~',
			'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I',
			'J', 'K', 'L', 'M', 'N', 'O', 'P', 'Q', 'R',
			'S', 'T', 'U', 'V', 'W', 'X', 'Y', 'Z', '.',
			'!', ',', '\0'};
	char res[25] = "";
	int n;

	for (n = 0; n <= 25; n++)
	{
		res[n] = res + alpha[rand() % 57];
	}
	return (0);
}

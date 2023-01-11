#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * argstostr - a function that concatenates all the arguments
 * @ac: first argument
 * @av: vector argument
 *
 * Return: pointer to string
 */
char *argstostr(int ac, char **av)
{
	int i, total_str_len = 0;
	char *p;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		total_str_len += strlen(av[i]);
	}

	p = malloc(sizeof(char) * (total_str_len + ac) + 1);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		/* av[i] = strcat(av[i], "\n "); */
		p = strcat(p, av[i]);
		p = strcat(p, "\n");
	}

	p[total_str_len + ac + 1] = '\0';
	return (p);
	free(p);
}

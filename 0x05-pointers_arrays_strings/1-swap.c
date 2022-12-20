#include "main.h"

/**
 * swap_int - swap the value of arguments
 * @a: first argument
 * @b: second argument
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int *p;

	*p = &a;
	*p = *(b);
	*b = *(a);
}

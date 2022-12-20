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
	*a = b;
	*b = a;
}

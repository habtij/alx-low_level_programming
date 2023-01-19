#include "function_pointers.h"

/**
 * int_index - a function that searches for an integer.
 * @array: first argument
 * @size: second argument
 * @cmp: function pointer argument
 *
 * Return: index of found integer, or -1 on failure
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array != NULL && cmp != NULL)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}

#include "function_pointers.h"

/**
 * print_name - a function that prints a name
 * @name: first argument
 * @f: function pointer
 *
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>

/**
 * print_dlistint - prints all the elements of DLL list
 * @h: pointer to the head of the DLL
 *
 * Return: size of the linked list, or 0
 */
size_t print_dlistint(const dlistint_t *h)
{
size_t n = 0;

while (h != NULL)
{
printf("%d\n", h->n);
h = h->next;
n++;
}
return (n);
}

#include "lists.h"
#include <stdlib.h>

/**
 * dlistint_len - returns the number of elements in a linked list
 * @h: pointer to the head node
 *
 * Return: number of elements in a double linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
size_t count = 0;

while (h != NULL)
{
count++;
h = h->next;
}
return (count);
}

#include "lists.h"
#include "stddef.h"

/**
 * listint_len - returns the number of nodes in linked list
 * @h: pointer to head
 *
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	size_t i;

	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}

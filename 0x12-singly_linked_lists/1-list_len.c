#include "lists.h"

/**
 * list_len - count number of nodes
 * @h: head node pointer
 *
 * Return: number of nodes
 */
size_t list_len(const list_t *h)
{
	size_t node_len = 0;

	while (h != NULL)
	{
		h = h->next;
		node_len++;
	}
	return (node_len);
}

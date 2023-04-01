#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to DLL head
 * @idx: the index of the list where new node should be added, start at 0
 * @n: integer data
 *
 * Return: address of the new node, or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
unsigned int i = 0;
dlistint_t *new;

new = malloc(sizeof(dlistint_t));
if (new == NULL)
{
free(new);
return (NULL);
}

new->n = n;

while ((*h) != NULL)
{
if (i == idx)
{
new->prev = (*h)->prev;
new->next = (*h);
(*h)->prev = new;
(*h) = new;
return (new);
}
i++;
(*h) = (*h)->next;
}
return (NULL);
free(new);
}

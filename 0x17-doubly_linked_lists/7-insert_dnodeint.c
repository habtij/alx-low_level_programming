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
dlistint_t *new, *temp;
temp = *h;

new = malloc(sizeof(dlistint_t));
if (new == NULL)
{
free(new);
return (NULL);
}

new->n = n;

while (temp != NULL && *h != NULL)
{
if (i == idx)
{
(*h)->next = new;
new->prev = *h;
temp = temp->next;
new->next = temp;
}
i++;
*h = (*h)->next;
temp = temp->next;
}
return (**h);
free(new);
}

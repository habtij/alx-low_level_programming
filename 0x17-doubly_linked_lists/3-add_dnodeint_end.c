#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - adds a new node at the end of a DLL
 * @head: pointer to the DLL head
 * @n: integer data
 *
 * Return: address of the new element, or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
dlistint_t *new;
dlistint_t *last = (*head);

new = malloc(sizeof(dlistint_t));
if (new == NULL)
{
free(new);
return (NULL);
}

new->n = n;
new->next = NULL;

if ((*head) == NULL)
{
new->prev = NULL;
(*head) = new;
return (new);
}

while (last->next != NULL)
{
last = last->next;
}

last->next = new;
new->prev = last;

return (new);
free(new);
}

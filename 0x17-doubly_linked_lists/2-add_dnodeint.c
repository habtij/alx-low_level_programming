#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - adds a new node at the beginning of a DLL
 * @head: pointer to the head
 * @n: integer data to enter
 *
 * Return: address of the new element, or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
dlistint_t *new;

new = malloc(sizeof(dlistint_t));
if (new == NULL)
{
  return (NULL);
  free(new);
}

new->n = n;
(*head)->prev = new;
new->next = *head;
new->prev = NULL;
*head = new;

return (new);
free(new);
}

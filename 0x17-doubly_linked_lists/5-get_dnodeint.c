#include "lists.h"
#include <stdlib.h>

/**
 * get_dnodeint_at_index - returns the nth node of a DLL
 * @head: pointer to DLL head
 * @index: index of node to return, starting from 0
 *
 * Return: node at index nth, or NULL if not exists
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
unsigned int n = 0;

while (head != NULL)
{
if (n == index)
{
return (head);
}
n++;
head->prev = head;
head = head->next;
}

return (NULL);
}

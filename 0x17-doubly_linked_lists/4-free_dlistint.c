#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - frees a DLL
 * @head: pointer to DLL head
 *
 * Return: nothing
 */
void free_dlistint(dlistint_t *head)
{
dlistint_t *temp;

while (head != NULL)
{
temp = head->next;
free(head);
head = temp;
}
}

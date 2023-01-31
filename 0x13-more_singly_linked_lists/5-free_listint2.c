#include "lists.h"
#include <stdlib.h>

/**
 * free_listint2 - free node and set head to NULL
 * @head: vector of pointer to head
 *
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	while (*head != NULL)
	{
		temp = *head;
		*head = *head->next;
		free(*head);
	}
	*head = NULL;
}

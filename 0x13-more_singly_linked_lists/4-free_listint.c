#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - free the listint_t node
 * @head: pointer to head node
 *
 * Return: nothing
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}

#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head of a node
 * @head: vector pointer to head
 *
 * Return: the value of member n of the node deleted
 * or 0 if the linked list is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int ret_val = 0;

	if (*head == NULL)
	{
		return (ret_val);
	}

	temp = *head;
	*head = (*head)->next;
	ret_val = temp->n;
	free(temp);

	return (ret_val);
}

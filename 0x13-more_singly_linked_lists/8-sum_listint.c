#include "lists.h"
#include <stdlib.h>

/**
 * sum_listint - sum the first element (n) of a node
 * @head: pointer to head
 *
 * Return: the summed value,
 * or NULL if linked list is empty
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
	{
		return (NULL);
	}

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

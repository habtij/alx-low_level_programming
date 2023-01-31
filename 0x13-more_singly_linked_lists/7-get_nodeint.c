#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - get the node int at index position
 * @head: pointer to head
 * @index: the node index
 *
 * Return: the value for node at index,
 * or NULL if not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
		{
			return (head);
		}
		i++;
		head = head->next;
	}
	return (NULL);
}

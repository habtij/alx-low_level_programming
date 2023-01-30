#include "lists.h"
#include <stdlib.h>

/**
 * add_nodeint - add elements to node
 * @head: pointer to head
 * @n: integer argument
 *
 * Return: pointer to node, NULL on failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->n = n;
	new_node->next = *head;
	*head = new_node;

	return (new_node);
}

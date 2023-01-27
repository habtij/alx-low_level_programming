#include "lists.h"
#include <stdlib.h>

/**
 * free_list - free list of nodes
 * @head: head node pointer
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		if (head->str != NULL)
		{
			free(head->str);
		}
		head = head->next;
	}
	free(head);
}

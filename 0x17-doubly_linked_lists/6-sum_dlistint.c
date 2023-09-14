#include "lists.h"
#include <stdlib.h>

/**
 * sum_dlistint - returns the sum of all the data (n) of a DLL
 * @head: pointer to DLL head
 *
 * Return: sum of data (n), or 0 if list is empty
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;

if (head == NULL)
{
return (0);
}

while (head != NULL)
{
sum += head->n;
head = head->next;
}
return (sum);
}

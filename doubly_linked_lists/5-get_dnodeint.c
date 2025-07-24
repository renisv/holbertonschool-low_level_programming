#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t list
 * @head: Pointer to the head of the list
 * @index: Index of the node to retrieve (starting from 0)
 *
 * Return: Pointer to the node at the given index, or NULL if not found
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count;

	count = 0;

	if (head == NULL)
		return (NULL);

	while (head != NULL)
	{
		if (index == count)
			return (head);
		count++;
		head = head->next;
	}

	return (head);
}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
*sum_dlistint - Returns the sum of all the data (n) in a doubly linked list
*@head: Pointer to the head of the list
*
*Return: Sum of all data (n), or 0 if list is empty
*/
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;

	while (head != NULL)
	{
		sum = sum + head->n;
		head = head->next;
	}

	return (sum);
}

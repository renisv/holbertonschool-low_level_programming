#include "lists.h"
#include <stdio.h>

size_t print_list(const list_t *h)
{
	size_t count;

	count = 0;
	while (h != NULL)
	{
		count++;
		h = h -> next;	
	}
	return (count);
}
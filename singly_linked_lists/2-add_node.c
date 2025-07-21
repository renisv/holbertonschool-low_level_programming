#include "lists.h"
#include <string.h>
#include <stdlib.h>

unsigned int length(const char *str)
{
	unsigned int count = 0;
	while (str[count] != '\0')
		count++;
	return (count);
}

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;
	char *duplicate;

	if (str == NULL)
		return (NULL);
	
	duplicate = strdup(str);
	if (duplicate == NULL)
		return (NULL);

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
	{
		free(duplicate);
		return (NULL);
	}
	
	new_node->str = duplicate;
	new_node->len = length(duplicate);

	new_node->next = *head;
	*head = new_node;

	return (new_node);
}
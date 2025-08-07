#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_create - Creates a new hash table
 * @size: The size of the array
 *
 * Description:
 * Allocates memory for a hash table structure and its array.
 * Initializes each element of the array to NULL.
 *
 * Return:
 * Pointer to the newly created hash table, or NULL if allocation fails
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table = malloc(sizeof(hash_table_t));

	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = malloc(sizeof(hash_node_t *) * size);

	if (table->array == NULL)
		return (NULL);

	return (table);
}

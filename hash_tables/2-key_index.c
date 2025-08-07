#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * key_index - Generates the index for a key in a hash table
 * @key: The key string to hash
 * @size: The size of the hash table array
 *
 * Description:
 * Uses the djb2 hash function to generate a hash value,
 * then calculates the index by taking the modulo of the hash
 * with the size of the array.
 *
 * Return:
 * The computed index for the key in the hash table
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

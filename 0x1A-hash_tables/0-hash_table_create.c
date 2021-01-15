#include "hash_tables.h"

/**
 *hash_table_create - creates hash tables
 *@size: size of array
 *Return: a pointer to a hash table
 *if something went wrong, return NULL
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(hash_table_t));
	if (ht == NULL)
		return (NULL);
	ht->array = malloc(size * sizeof(hash_node_t *));
	if (ht->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
		ht->array[i] = NULL;
	ht->size = size;
	return (ht);
}

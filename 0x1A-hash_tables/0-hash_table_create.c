#include "hash_tables.h"
/**
 * hash_table_create - assign new table
 * @size: size of element to create
 * Return: New table hash_table_t
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new;

	if (size == 0)
		return (NULL);
	new = malloc(sizeof(hash_table_t));
	if (!new)
		return (NULL);
	new->size = size;
	new->array = malloc(size * sizeof(hash_node_t));
	if (!new->array)
		return (NULL);
	return (new);
}

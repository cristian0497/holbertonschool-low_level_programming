#include "hash_tables.h"
/**
 * hash_table_set - Create and set new node
 * @ht: hash table
 * @key: Key idx
 * @value: Value Index
 * Return: 1(succes) 0(failure)
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *tmp, *node = NULL;
	unsigned long int index = 0;

	if ((!ht) || (!key) || (!value))
		return (0);
	if (strlen(key) == 0)
		return (0);
	index = key_index((unsigned char *)node->key, ht->size);
	if (ht->array[index])
	{
		tmp = ht->array[index];
		while (tmp && strcmp(tmp->key, key) != 0)
			tmp = tmp->next;
		if (tmp && strcmp(tmp->key, key) == 0)
		{
			free(tmp->value);
			tmp->value = strdup(value);
			return (1);
		}
	}
	node = malloc(sizeof(hash_node_t));
	if (!node)
		return (0);
	node->key = strdup(key);
	if (!node->key)
	{
		free(node);
		return (0);
	}
	node->value = strdup(value);
	if (!node->value)
	{
		free(node->key);
		free(node);
		return (0);
	}
	node->next = ht->array[index];
	ht->array[index] = node;
	return (1);
}

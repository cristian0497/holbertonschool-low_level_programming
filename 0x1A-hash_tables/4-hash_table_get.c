#include "hash_tables.h"
/**
 * hash_table_get - return a key:vale
 * @ht: hash table
 * @key: jey to find
 * Return: a value of key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *tmp;
	unsigned long int index = 0;

	if ((!ht) || (!key))
		return (0);
	if (strlen(key) == 0)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	if (ht->array[index])
	{
		tmp = ht->array[index];
		while (tmp && strcmp(tmp->key, key) != 0)
			tmp = tmp->next;
		if (tmp && strcmp(tmp->key, key) == 0)
			return (tmp->value);
	}
	return (NULL);

}

#include "hash_tables.h"
/**
 * hash_table_delete - clear the node index
 * @ht: hash table to free
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int cont = 0;
	hash_node_t *tmp = NULL, *node_tmp = NULL;

	if (!ht)
	{
		printf("ht empty");
		return;
	}
	for (cont = 0; cont < ht->size; cont++)
	{
		node_tmp = ht->array[cont];
		while (node_tmp)
		{
			tmp = ht->array[cont]->next;
			free(node_tmp->key);
			free(node_tmp->value);
			free(node_tmp);
			node_tmp = tmp;
		}
		free(tmp);
	}
	free(ht->array);
	free(ht);
}

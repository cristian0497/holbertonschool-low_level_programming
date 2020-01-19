#include "hash_tables.h"
/**
 * hash_table_print - print a hash table
 * @ht: hash table to print
 * Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int x, cont = 0;

	if (!ht)
		return;
	printf("{");
	if (!ht->array)
	{
		printf("}\n");
		return;
	}
	for (x = 0; x < ht->size; x++)
	{

		while (ht->array[x])
		{
			if (cont)
				printf(", ");
			printf("'%s': '%s'", ht->array[x]->key, ht->array[x]->value);
			cont = 1;
			ht->array[x] = ht->array[x]->next;
		}
	}
	printf("}\n");
}

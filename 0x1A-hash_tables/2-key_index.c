#include "hash_tables.h"
/**
 * key_index - return a key_index to save
 * @key: unsigned string to save
 * @size: the size of array
 * Return: the key index with djb2
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}

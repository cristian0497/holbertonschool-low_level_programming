#include "lists.h"
#include <string.h>
/**
 * _strlen - Count char
 * @s: funtion
 * Return: 0 Succes
 */
int _strlen(const char *s)
{
	int contchar = 0;

	while (s[contchar] != '\0')
	{
		contchar++;
	}
	return (contchar);
}

/**
 * add_node - funtion add a node str
 * @head: head of list_t
 * @str: string to add
 * Return: add_node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *add_node;
	const char *st = str;

	add_node = malloc(sizeof(list_t));
	if (!str)
	{
		return (NULL);
	}
	add_node->str = strdup(st);
	add_node->len = _strlen(st);
	add_node->next = *head;
	*head = add_node;

	return (add_node);

}

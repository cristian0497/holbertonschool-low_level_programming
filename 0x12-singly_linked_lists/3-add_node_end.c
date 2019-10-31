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
 * add_node_end - funtion add nodes in end
 * @head: addres of head
 * @str: string to pass
 * Return: new_toend
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new_toend, *aux;
	const char *st = str;

	new_toend = malloc(sizeof(list_t));
	if (!new_toend)
		return (NULL);
	new_toend->str = strdup(st);
	new_toend->len = _strlen(st);
	new_toend->next = NULL;
	if (!*head)
		*head = new_toend;
	else
	{
		aux = *head;
		while (aux->next)
			aux = aux->next;
		aux->next = new_toend;
		}
	return (new_toend);
}

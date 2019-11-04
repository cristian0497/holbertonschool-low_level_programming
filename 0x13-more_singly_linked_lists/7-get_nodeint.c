#include "lists.h"

/**
 * get_nodeint_at_index - funtion obtain num of index
 * @head: addres of head function main
 * @index: number to index to find
 * Return: head - if index no exist NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int cont = 0;
	listint_t *node;

	while (head)
	{
		node = head;
		head = node->next;
		cont++;
		if (cont == index)
			return (head);
	}
	return (NULL);
}

#include "lists.h"
/**
 * add_dnodeint - Add new node
 * @head: head addres
 * @n: value to assign
 * Return: addres of new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *node;

	node = malloc(sizeof(dlistint_t));
	if (!node)
	{
		printf("Error to Add");
		return (NULL);
	}
	node->n = n;
	node->next = (*head);
	node->prev = NULL;
	if ((*head) != NULL)
		(*head)->prev = node;
	(*head) = node;
	return (*head);
}

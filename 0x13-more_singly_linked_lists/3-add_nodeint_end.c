#include "lists.h"

/**
 * add_nodeint_end - funtion to add node
 * @head: addres of head
 * @n: value to add
 * Return: end
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *end, *aux;

	end = malloc(sizeof(listint_t));
	if (!end)
		return (NULL);
	end->n = n;
	end->next = NULL;

	if (!*head)
		*head = end;
	else
	{
		aux = *head;
		while (aux->next)
			aux = aux->next;
		aux->next = end;
	}
	return (end);
}

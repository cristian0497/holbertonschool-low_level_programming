#include "lists.h"

/**
 * pop_listint - funtion to pop value
 * @head: addres of head
 * Return: value
 */

int pop_listint(listint_t **head)
{
	listint_t *pop;
	int ret;

	if (!head)
		return (0);
	pop = (*head)->next;
	ret = (*head)->n;
	free(*head);
	*head = pop;

	return (ret);
}

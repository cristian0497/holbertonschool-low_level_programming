#include "lists.h"

/**
 * add_nodeint - funtion to add node
 * @head: addres of the head
 * @n: value to asign
 * Return: structure with new node
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ret;

	ret = malloc(sizeof(listint_t));
	if (!ret)
		return (NULL);
	if ((!head) || (!n))
		return (NULL);

	ret->n = n;
	ret->next = *head;
	*head = ret;

	return (ret);
}

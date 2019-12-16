#include "lists.h"
/**
 * delete_dnodeint_at_index - delete node especified by index
 * @head: linked list
 * @index: position to remove
 * Return: 1(Succes)  -1(failure)
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *tmp = (*head), *x, *x_back;
	unsigned int cont = 0;

	while (tmp && cont < index)
	{
		tmp = tmp->next;
		cont += 1;
	}
	if (cont <= index && (!tmp))
		return (-1);
	if (index == 0)
	{
		tmp = (*head)->next;
		(*head)->next = NULL;
		(*head) = tmp;
		tmp = tmp->prev;
		free(tmp);
		(*head)->prev = NULL;
		return (1);
	}
	x = tmp;
	if (cont == index)
	{
		tmp = tmp->prev;
		tmp->next = NULL;
		free(x);
		return (1);
	}
	x_back = tmp->next;
	tmp = tmp->prev;
	tmp->next = x_back;
	x_back = tmp;
	tmp = tmp->next;
	tmp->prev = x_back;
	tmp = x;
	free(tmp);
	return (1);
}

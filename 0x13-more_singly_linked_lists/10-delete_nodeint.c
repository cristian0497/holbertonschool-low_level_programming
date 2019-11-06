#include "lists.h"

/**
 * delete_nodeint_at_index - funtion that delete nth node
 * @head: addres of node to delete
 * @index: number of node to delete
 * Return: 1 Succes - -1 fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *clear, *tmp = *head;
	unsigned int cont = 0;

	if (head && *head)
	{
		if (index == 0)
		{
			*head = tmp->next;
			free(tmp);
		}
		else
		{
			while (cont != index - 1)
			{
				tmp = tmp->next;
				if (!tmp)
					return (-1);
				cont++;
			}
			clear = tmp->next;
			tmp->next = tmp->next->next;
			free(clear);
		}
		return (1);
	}
	return (-1);
}

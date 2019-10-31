#include "lists.h"

/**
 * free_list - funtion free
 * @head: head of main funtion
 */
void free_list(list_t *head)
{
	list_t *fre_e;

	if (head != NULL)
	{
		while (head != NULL)
		{
			fre_e = head->next;
			free(head->str);
			free(head);
			head = fre_e;
		}
	}
}

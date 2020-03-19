#include "lists.h"
/**
 * free_list -  free print cotaing in list
 * @head: pointrs list_t
 * Return: 0
 */
void free_list(list_t *head)
{
	list_t *tmp;

	if (head == NULL)
	{
		return;
	}
	while (head->next != NULL)
	{
		tmp = head->next;
		free(head->str);
		free(head);
		head = tmp;
	}
	free(head->str);
	free(head);
}

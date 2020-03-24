#include "lists.h"
/**
*free_listint - free data
*@head: doble pointer
*Return: 0
*/
void free_listint(listint_t *head)
{

	listint_t *tmp;

	if (head == NULL)
	{
		return;
	}
	while (head->next != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
	free(head);
}

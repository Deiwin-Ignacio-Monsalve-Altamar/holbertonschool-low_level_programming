#include "lists.h"
/**
*free_listint2 - free data
*@head: doble pointer
*Return: 0
*/
void free_listint2(listint_t **head)
{
	listint_t *tmp = NULL, *new = NULL;

	if (head == NULL)
	{
		return;
	}
	tmp = *head;
	while (tmp != NULL)
	{
		new = tmp;
		tmp = tmp->next;
		free(new);
	}
	*head = NULL;
}

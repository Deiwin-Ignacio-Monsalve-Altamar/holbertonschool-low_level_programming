#include "lists.h"
/**
*pop_listint - return numbers
*@head: doble pointer
*Return: integer
*/
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int i = 0;

	if (!(*head))
	{
		return (0);
	}
	tmp = (*head)->next;
	i = (*head)->n;
	free(*head);
	*head = tmp;
	return (i);
}

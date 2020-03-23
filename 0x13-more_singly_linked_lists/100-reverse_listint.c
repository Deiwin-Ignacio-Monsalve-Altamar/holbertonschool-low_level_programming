#include "lists.h"
/**
*reverse_listint - adding data a list
*@head: pointer
*Return: 0
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	prev = NULL;
	next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}
	*head  = prev;
	return (*head);
}

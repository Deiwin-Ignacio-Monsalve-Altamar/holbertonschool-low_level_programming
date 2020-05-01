#include "lists.h"
/**
 * free_dlistint - function that free a dlistint_t list.
 * @head: dlistint
 * Return: void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp = NULL;

	while (head != NULL)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}

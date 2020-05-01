#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of
 * @head: dlisint_t
 * @index: unsigned int
 * Return: dlistint
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int aux = 0;

	if (head == NULL)
		return (NULL);
	while (head->next != NULL)
	{
		if (aux == index)
		{
			break;
		}
		head = head->next;
		aux++;
	}
	return (head);
}

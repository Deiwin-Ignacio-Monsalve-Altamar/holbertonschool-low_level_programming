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
	dlistint_t *copy;

	if (head == NULL)
		return (NULL);

	copy = head;
	while (copy != NULL)
	{
		if (aux == index)
		{
			return (copy);
		}
		aux++;
		copy = copy->next;
	}
	return (NULL);
}

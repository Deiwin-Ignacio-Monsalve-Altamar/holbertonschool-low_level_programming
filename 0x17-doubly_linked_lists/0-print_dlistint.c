#include "lists.h"

/**
 * print_dlistint - that prints all the elements of a dlistint_t list
 * @h: nodo struc dlistint
 * Return: 0
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i = 0;

	if (!h)
	{
		return (i);
	}

	while (h != NULL)
	{
		printf("%d\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}

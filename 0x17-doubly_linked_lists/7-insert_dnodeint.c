#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position.
 * @h: dlistint variables struct
 * @idx: unsigned int
 * @n: int
 * Return: dlistint_t
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int auxposition = 0;
	dlistint_t *add_nodo = NULL, *temp = NULL;

	if (h == NULL)
		return (NULL);
	add_nodo = malloc(sizeof(dlistint_t));
	if (add_nodo == NULL)
		return (NULL);
	add_nodo->n = n;
	if (!idx && *h == NULL)
	{
		add_nodo->prev = NULL;
		add_nodo->next = NULL;
		*h = add_nodo;
		return (add_nodo);
	}
	if (idx == 0)
	{
		add_nodo->next = *h;
		add_nodo->prev = NULL;
		(*h)->prev = add_nodo;
		*h = add_nodo;
		return (add_nodo);
	}
	temp = *h;
	auxposition = 0;
	while (temp)
	{
		if (auxposition == idx)
		{
			temp->prev->next = add_nodo;
			add_nodo->prev = temp->prev;
			temp->prev = add_nodo;
			add_nodo->next = temp;
			return (add_nodo);
		}
		if (temp->next == NULL && ++auxposition == idx)
		{
			temp->next = add_nodo;
			add_nodo->next = NULL;
			add_nodo->prev = temp;
			return (add_nodo);
		}
		auxposition++;
		temp  = temp->next;
	}
	return (NULL);
}

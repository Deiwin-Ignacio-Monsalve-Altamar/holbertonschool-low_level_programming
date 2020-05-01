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
	dlistint_t *add_nodo = NULL, *temp = NULL, *temp_header = NULL;

	if (h == NULL)
		return (NULL);

	temp_header = *h;
	while (temp_header != NULL)
	{
		auxposition++;
		temp_header = temp_header->next;
	}
	if (idx > auxposition)
		return (NULL);

	add_nodo = malloc(sizeof(dlistint_t));
	if (add_nodo == NULL)
		return (NULL);

	add_nodo->n = n;
	if (idx == 0)
	{
		add_nodo->next = *h;
		add_nodo->prev = NULL;
		*h = add_nodo;
		return (add_nodo);
	}
	temp = *h;
	auxposition = 0;
	while (auxposition < idx && temp->next)
	{
		temp  = temp->next;
		auxposition++;
	}
	add_nodo->next = temp->next;
	temp->next = add_nodo;
	add_nodo->prev = temp;
	return (add_nodo);
}

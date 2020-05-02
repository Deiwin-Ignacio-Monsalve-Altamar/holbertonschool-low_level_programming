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
	dlistint_t *new, *tmp, *con;
	unsigned int i = 0, j = 0;

	con = *h;
	if (h == NULL)
		return (NULL);

	while (con)
	{
		con = con->next;
		j++;
	}
	if (idx > j)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	/*insert nodo beginning*/
	if (!idx && *h == 0)
	{
		new->prev = NULL;
		new->next = NULL;
		*h = new;
		return (new);
	}
	if (!idx)
	{
		new->prev = NULL;
		new->next = *h;
		(*h)->prev = new;
		*h = new;
	}
	/*insert fin end*/
	tmp = *h;
	while (i < idx - 1 && tmp->next)
	{
		tmp = tmp->next;
		i++;
	}
	new->next = tmp->next;
	tmp->next = new;
	new->prev = tmp;
	return (new);
}

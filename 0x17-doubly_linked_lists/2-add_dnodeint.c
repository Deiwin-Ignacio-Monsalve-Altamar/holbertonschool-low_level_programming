#include "lists.h"
/**
 * add_dnodeint - node at the beginning of a dlistint_t list.
 * @head: dlistint_t
 * @n: int const
 * Return: dlistint_t
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL, *tmp = NULL;

	if (head != NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;

	tmp = *head;
	*head = new;
	new->next = tmp;

	if (tmp != NULL)
	{
		tmp->prev = *head;
	}
	return (new);
}

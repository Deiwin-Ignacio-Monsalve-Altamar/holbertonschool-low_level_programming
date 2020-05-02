#include "lists.h"
/**
 * add_dnodeint - node at the beginning of a dlistint_t list.
 * @head: dlistint_t
 * @n: int const
 * Return: dlistint_t
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = NULL;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;

	if (*head == NULL)
	{
		*head = new;
		new->prev = NULL;
		new->next = NULL;
		return (new);
	}
	(*head)->prev = new;
	new->next = *head;
	new->prev = NULL;
	*head = new;
	return (new);
}

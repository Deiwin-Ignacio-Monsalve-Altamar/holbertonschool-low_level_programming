#include "lists.h"
/**
*insert_nodeint_at_index - insert nodo in the index
*@head: pointer
*@idx: place a colocate
*@n: value a adding
*Return: listint_t
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *tmp;
	unsigned int i = 1;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	if (head == NULL)
	{
		return (NULL);
	}
	tmp = *head;
	while (i < idx && tmp->next)
	{
		tmp = tmp->next;
		i++;
	}
	new->next = tmp->next;
	tmp->next = new;
	return (new);
}

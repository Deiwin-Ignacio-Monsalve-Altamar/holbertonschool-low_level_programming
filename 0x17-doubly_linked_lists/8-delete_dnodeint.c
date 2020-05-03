#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node at index
 *@head: dlisint_t
 *@index: unsigned int
 * Return: dlistint
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *delete_nodo = NULL, *temp_nodo = NULL;
	unsigned int auxpostions = 0;

	if (*head == NULL)
		return (-1);

	delete_nodo = *head;
	if (index == 0)
	{
		*head = delete_nodo->next;
		if (delete_nodo->next != NULL)
			delete_nodo->next->prev = NULL;
		free(delete_nodo);
		return (1);
	}

	while (auxpostions < (index - 1))
	{
		if (delete_nodo == NULL)
			return (-1);
		++auxpostions;
		delete_nodo = delete_nodo->next;
	}

	temp_nodo = delete_nodo->next->next;
	if (delete_nodo->next->next != NULL)
		delete_nodo->next->next->prev = delete_nodo;
	free(delete_nodo->next);
	delete_nodo->next = temp_nodo;
	return (1);
}

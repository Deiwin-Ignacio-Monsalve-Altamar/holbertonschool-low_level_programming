#include "lists.h"
/**
*add_nodeint - number nodos
*@n: pointers list
*@head: doble pointer
*Return: listint_t
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	list_t *new;

	if (head == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		(*new).next = NULL;
	}
	else
	{
		(*new).next = *head;
	}
	(*new).n = n;
	*head = new;

	return (*head);
}

#include "lists.h"
/**
*get_nodeint_at_index - adding data a list
*@head: pointer
*@index: unisgned int
*Return: 0
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *new;
	unsigned int pocision = 0;

	if (head == NULL)
	{
		return (NULL);
	}
	new = head;
	while (pocision < index && new->next)
	{
		new = new->next;
		pocision++;
	}
	if (pocision != index)
	{
		return (NULL);
	}
	return (new);
}

#include "lists.h"
/**
**find_listint_loop - adding data a list
*@head: pointer
*Return: listint_t
*/
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *aux = head, *control;

	if (!head)
		return (NULL);
	if (head == head->next)
		return (head);
	while (aux)
	{
		aux = aux->next;
		control = head;
		while (aux && control != aux)
		{
			if (control == aux->next)
				return (control);
			control = control->next;
		}
	}
	return (aux);
}

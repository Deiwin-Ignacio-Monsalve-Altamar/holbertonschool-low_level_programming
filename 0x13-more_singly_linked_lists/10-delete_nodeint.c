#include "lists.h"
/**
*delete_nodeint_at_index - insert nodo in the index
*@head: pointer
*@index: place a colocate
*Return: integer
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *delete, *tmp;
	unsigned int i = 0;

	if (*head != NULL)
	{
		tmp = *head;
		delete  = *head;
		if (index == 0)
		{
			tmp = tmp->next;
			free(*head);
			(*head) = tmp;
			return (1);
		}
		while (i < index)
		{
			if (tmp == 0)
			{
				return (-1);
			}
			if (i < index - 1)
			{
				delete = delete->next;
			}
			tmp = tmp->next;
			i++;
		}

		delete->next = tmp->next;
		free(tmp);
		return (1);
	}
	return (-1);
}

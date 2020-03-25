#include "lists.h"
/**
*free_listint_safe - adding data a list
*@h: double pointer
*Return: size_t
*/
size_t free_listint_safe(listint_t **h)
{
	size_t len = 0;

	if (*h == NULL)
	{
		return (0);
	}
	while (*h)
	{
		len++;
		if (*h - (*h)->next > 0)
		{
			free(*h);
		}
		else
		{
			free(*h);
			break;
		}
		*h = (*h)->next;
	}
	*h = NULL;
	return (len);
}

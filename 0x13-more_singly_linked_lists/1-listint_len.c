#include "lists.h"
/**
*listint_len - number nodos
*@h: pointers list
*Return: size_t number nodos
*/
size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		i++;
		h = h->next;
	}
	return (i);
}

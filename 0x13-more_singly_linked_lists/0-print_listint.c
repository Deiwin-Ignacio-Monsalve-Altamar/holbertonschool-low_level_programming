#include "lists.h"
/**
*print_listint - print all the elements of a list
*@h: pointers list
*Return: size_t number nodos
*/
size_t print_listint(const listint_t *h)
{
	unsigned int i = 0;

	if (h == NULL)
	{
		return (0);
	}
	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		i++;
	}
	return (i);
}

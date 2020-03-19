#include "lists.h"
/**
 * list_len - print cotaing in list
 * @h: constant list_t
 * Return: int
 */
size_t list_len(const list_t *h)
{
	int m;

	if (h == NULL)
		return (0);
	for (m = 0; (*h).str != NULL; m++)
	{
		h = (*h).next;
	}
	return (m);
}

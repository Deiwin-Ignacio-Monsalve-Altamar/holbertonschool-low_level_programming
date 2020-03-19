#include "lists.h"
/**
 * print_list - print cotaing in list
 * @h: constant list_t
 * Return: int
 */
size_t print_list(const list_t *h)
{
	int m;

	if (h == NULL)
		return (0);
	for (m = 1; (*h).next != NULL; m++)
	{
		if ((*h).str != NULL)
		{
			printf("[%u] %s\n", (*h).len, (*h).str);
		}
		else
		{
			printf("[%u] %s\n", (*h).len, "(nil)");
		}
		h = (*h).next;
	}
	printf("[%u] %s\n", (*h).len, (*h).str);
	return (m);
}

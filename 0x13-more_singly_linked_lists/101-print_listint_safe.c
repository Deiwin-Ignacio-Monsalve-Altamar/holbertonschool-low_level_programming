#include "lists.h"
/**
*print_listint_safe - adding data a list
*@head: pointer
*Return: int
*/
size_t print_listint_safe(const listint_t *head)
{
	size_t len = 0;

	if (head == NULL)
	{
		return (98);
	}
	while (head)
	{
		len++;
		if (head - head->next > 0)
		{
			printf("[%p] %d\n", (void *)head, head->n);
		}
		else
		{
			printf("[%p] %d\n", (void *)head, head->n);
			printf("->[%p] %d\n", (void *)head, head->next->n);
			break;
		}
		head = head->next;
	}
	return (len);
}
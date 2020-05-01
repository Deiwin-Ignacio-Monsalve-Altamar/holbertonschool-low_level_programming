#include "lists.h"
/**
 * sum_dlistint - function that returns the sum of all the data
 * @head: dlistint_t list
 * Return: integer
 */
int sum_dlistint(dlistint_t *head)
{
	size_t result = 0;

	if (head == NULL)
		return (result);
	while (head != NULL)
	{
		result = result + head->n;
		head = head->next;
	}
	return (result);
}

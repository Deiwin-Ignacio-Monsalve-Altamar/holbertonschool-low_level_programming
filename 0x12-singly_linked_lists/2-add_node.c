#include "lists.h"
#include <string.h>
/**
 * add_node - print cotaing in list
 * @head: pointrs list_t
 * @str: const char
 * Return: list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;

	if (head == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(list_t));
	if (new == NULL)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		(*new).next = NULL;
	}
	else
	{
		(*new).next = *head;
	}
	(*new).str = strdup(str);
	(*new).len = strlen(str);
	*head = new;

	return (*head);
}

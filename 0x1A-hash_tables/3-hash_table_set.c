#include "hash_tables.h"

/**
 * hash_table_set - get y set data in c
 * @key:  cons char
 * @value:  cons char
 * @ht:  cons char
 * Return: integer
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *head = NULL;
	hash_node_t *n_node = NULL;

	if (ht == NULL || ht->array == NULL || ht->size == 0 ||
	    key == NULL || strlen(key) == 0 || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	head = ht->array[index];
	while (head)
	{
		if (strcmp(head->key, key) == 0)
		{
			free(head->value);
			head->value = strdup(value);
			return (1);
		}
		head = head->next;
	}
	n_node = malloc(sizeof(hash_node_t));
	if (n_node == NULL)
		return (0);
	n_node->key = strdup(key);
	if (n_node->key == NULL)
	{
		free(n_node);
		return (0);
	}
	n_node->value = strdup(value);
	if (n_node->value == NULL)
	{
		free(n_node);
		return (0);
	}
	n_node->next = ht->array[index];
	ht->array[index] = n_node;
	return (1);
}

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
	unsigned long int idx = 0;
	hash_node_t *new_node, *tmp;
	const unsigned char *new_key = (const unsigned char *) key;

	if (!ht || !strlen(key) || !ht->size)
		return (0);
	idx = key_index(new_key, ht->size);
	tmp = ht->array[idx];
	if (tmp != NULL)
	{
		while (tmp != NULL)
		{
			if (strcmp(tmp->key, key) == 0)
			{
				free(tmp->value);
				tmp->value = strdup(value);
				return (1);
			}
			tmp = tmp->next;
		}
	}
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	if (new_node->next == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node);
		return (0);
	}
	new_node->next = ht->array[idx];
	ht->array[idx] = new_node;
	return (1);
}

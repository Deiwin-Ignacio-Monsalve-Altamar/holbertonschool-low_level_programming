#include "hash_tables.h"

/**
 * hash_table_delete - free tables
 * @ht: pointr character
 * Return: 
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned int index;
	hash_node_t *runner, *tmp;

	if (ht == NULL)
		return;
	index = 0;
	while (index < ht->size)
	{
		runner = ht->array[index];
		while (runner)
		{
			free(runner->key);
			free(runner->value);
			tmp = runner->next;
			free(runner);
			runner = tmp;
		}
		++index;
	}
	free(ht->array);
	free(ht);
}

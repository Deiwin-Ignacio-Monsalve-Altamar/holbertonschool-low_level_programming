#include "search_algos.h"

/**
 * linear_search - earches for a value in an array
 * @size: valuen in size_t with size
 * @array: list with numbers
 * @value: value a search
 *
 * Return: integer
 */
int linear_search(int *array, size_t size, int value)
{
	if (!array || size == 0)
		return (-1);
	int i = 0;

	for (i = 0; i < (int)size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}

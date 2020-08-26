#include "search_algos.h"
#include <math.h>

/**
 * search_value - earches for a value in an array
 * @size: valuen in size_t with size
 * @i: unsigned integer
 * @end: unsigned int
 * @array: list with numbers
 * @value: value a search
 *
 * Return: integer
 */
int search_value(int *array, unsigned int i,
unsigned int end, int value, size_t size)
{
	while (i <= end)
	{
		if (i >= size)
			return (-1);
		printf("Value checked array[%u] = [%u]\n", i, array[i]);
		if (value == array[i])
			return (i);

		i++;
	}
	return (-1);
}
/**
 * jump_search - earches for a value in an array
 * @size: valuen in size_t with size
 * @array: list with numbers
 * @value: value a search
 *
 * Return: integer
 */
int jump_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);

	unsigned int i = 0;
	unsigned int m = sqrt(size);

	while (i < size)
	{
		printf("Value checked array[%u] = [%i]\n", i, array[i]);
		if (value >= array[i] && value <= array[i + m])
		{
			printf("Value found between indexes [%u] and [%u]\n", i, i + m);
			return (search_value(array, i, i + m, value, size));
		}
		i += m;
	}
	printf("Value found between indexes [%u] and [%u]\n", i - m, i);

	return (search_value(array, i - m, i, value, size));
}

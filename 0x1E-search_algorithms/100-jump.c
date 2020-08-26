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
	int i = 0;
	int m = (int)sqrt(size);

	if (!array)
		return (-1);


	while (i < (int)size)
	{
		printf("Value checked array[%d] = [%d]", i, array[i]);
		if (value >= array[i] && value <= array[i + m])
		{
			printf("Value found between indexes [%d] and [%d]", i, i + m);
			return (search_value(array, i, i + m, value, size));
		}
		i += m;
	}
	printf("Value found between indexes [%d] and [%d]", i - m, i);

	return (search_value(array, i - m, i, value, size));
}

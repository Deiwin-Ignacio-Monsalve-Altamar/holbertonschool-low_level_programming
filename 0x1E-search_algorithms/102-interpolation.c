#include "search_algos.h"

/**
 * interpolation_search - earches for a value in an array
 * @size: valuen in size_t with size
 * @array: list with numbers
 * @value: value a search
 *
 * Return: integer
 */
int interpolation_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);

	int low = 0, high = (int)(size - 1), pos;

	while (low <= high && value >= array[low] && value <= array[high])
	{
		if (low == high)
		{
			if (array[low] == high)
				return (low);
			return (-1);
		}

		pos = low + (((double)(high - low) /
		(array[high] - array[low])) * (value - array[low]));
		printf("Value checked array[%d] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		if (array[pos] < value)
			low = pos + 1;
		else
			high = pos - 1;
	}
	pos = low + (((double)(high - low) /
			  (array[high] - array[low])) * (value - array[low]));
	printf("Value checked array[%d] is out of range\n", pos);
	return (-1);
}

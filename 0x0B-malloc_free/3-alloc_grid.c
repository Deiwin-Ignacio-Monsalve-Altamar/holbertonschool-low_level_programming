#include "holberton.h"
#include <stdlib.h>
/**
  * **alloc_grid - print character
  * @width: pointr character
  * @height: poinr character
  * Return:int array
  **/
int **alloc_grid(int width, int height)
{
	int i;
	int **array;

	if (width < 1 || height < 1)
		return (NULL);

	array = malloc(width * sizeof(int *));
	if (array == NULL)
		return (array);
	else
	{
	for (i = 0; i < width; i++)
	{
		array[i] = malloc(height * sizeof(int));
		if (array[i] == NULL)
			return (NULL);
	}
	free(array[i]);
	}
	return (array);
	free(array);
}

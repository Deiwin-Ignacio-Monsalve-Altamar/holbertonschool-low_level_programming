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

	if (width <= 0 || height <= 0)
		return (NULL);

	array = malloc(width * sizeof(int *));
	if (array == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
		array[i] = malloc(height * sizeof(int));
	return (array);
}

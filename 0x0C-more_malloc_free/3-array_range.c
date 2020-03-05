#include "holberton.h"
#include <stdlib.h>

/**
* array_range - print character
* @min: integer
* @max: integer
* Return: int
*/
int *array_range(int min, int max)
{
	int i;
	int *s;

	if (min > max)
		return (NULL);
	s = malloc((int) *(max - min) + 1);
	if (s == NULL)
		return (NULL);
	for (i = 0; i < (max - min); i++)
	{
		s[i] = min;
		min++;
	}
	return (s);
}

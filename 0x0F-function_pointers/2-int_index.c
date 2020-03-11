#include "function_pointers.h"
/**
  * int_index - print a name in uppercase
  * @array: positions
  * @cmp : fuctions pointers
  * @size :  tamaño
  * Return: Integer
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array && size && cmp)
	{
		int i;

		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
			if ((cmp)(array[i]) == 1)
				return (i);
		return (-1);
	}
}

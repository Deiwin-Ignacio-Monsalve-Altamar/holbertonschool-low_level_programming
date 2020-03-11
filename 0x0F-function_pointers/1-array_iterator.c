#include "function_pointers.h"
/**
  * array_iterator - print a name in uppercase
  * @array: int array
  * @size : type size_t
  * Return: Nothing.
  *@action : pointers
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array != NULL && size != NULL && action != NULL)
	{
		size_t p;
		for (p = 0; p < size; p++)
			action(array[p]);
	}
}

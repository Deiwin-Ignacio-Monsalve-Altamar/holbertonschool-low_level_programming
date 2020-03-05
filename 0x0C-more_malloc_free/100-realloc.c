#include "holberton.h"
#include <assert.h>
#include <string.h>
#include <stdlib.h>

/**
  * _realloc - print character
  * @ptr: pointrs
  * @old_size: integer
  * @new_size: integer
  * Return: int
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *ptrNew;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (!ptr)
		return (malloc(new_size));
	else if (new_size <= old_size)
		return (ptr);
	assert((ptr) && (new_size > old_size));
	ptrNew = malloc(new_size);
	if (ptrNew)
	{
		memcpy(ptrNew, ptr, old_size);
		free(ptr);
	}
	return (ptrNew);
}

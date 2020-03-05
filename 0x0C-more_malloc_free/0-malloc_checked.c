#include "holberton.h"
#include <stdlib.h>

/**
   * malloc_checked - checker mallo
     * @b: unsigned integer
      * Return: void
       */
void *malloc_checked(unsigned int b)
{
	void *s;

	s = malloc(b * sizeof(int));
	if (s == NULL)
		exit(98);
	return (s);
}

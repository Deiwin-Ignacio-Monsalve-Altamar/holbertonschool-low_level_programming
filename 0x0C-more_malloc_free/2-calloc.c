#include <stdlib.h>
#include "holberton.h"
/**
 * _calloc - concatenates all the arguments of your program.
 * @nmemb: unsigned int
 * @size: unsigned int
 * Return: str
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *s;

	if (nmemb == 0 || size == 0)
		return (NULL);
	s = malloc(nmemb * size);
	if (s == NULL)
		return (NULL);
	return (s);
}

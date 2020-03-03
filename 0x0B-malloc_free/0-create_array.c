#include "holberton.h"
#include <stdlib.h>
/**
*create_array - create array for print
*
*@size: the unsigned integer
*@c: pointrs char
*
* Return: the variable digit
*/
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *n;
	if (size == 0)
		return (0);

	n = malloc(size * sizeof(char));
	if (n == NULL)
		return (n);
	for (i = 0; i < size; i++)
		n[i] = c;

	return (n);
}

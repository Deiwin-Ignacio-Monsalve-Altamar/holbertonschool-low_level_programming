#include "holberton.h"
#include <stdlib.h>
/**
* *_strdup - print character
* @str: pointr character
* Return: *char
*/
char *_strdup(char *str)
{
	int i, x;
	char *dst;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	dst = malloc(sizeof(char) * (i + 1));

	if (dst == NULL)
		return (NULL);
	for (x = 0; str[x] != '\0'; x++)
		dst[x] = str[x];
	return (dst);
}

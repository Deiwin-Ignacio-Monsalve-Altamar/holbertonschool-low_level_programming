#include "holberton.h"
/**
 * *_strcat - print character
 * @src: pointr character
 * @dest : poinr character
 * Return: *char
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while ((dest[i++] = src[j++]) != '\0')
	{
	}
	dest[i] = '\0';
	return (dest);
}


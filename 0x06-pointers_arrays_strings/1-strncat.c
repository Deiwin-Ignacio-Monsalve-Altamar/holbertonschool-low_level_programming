#include "holberton.h"
/**
 * *_strncat - print character
 * @src: pointr character
 * @dest : poinr character
 * @n: integer
 * Return: *char
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
		if (src[j] == '\0')
		{
			break;
		}
	}
	return (dest);
}

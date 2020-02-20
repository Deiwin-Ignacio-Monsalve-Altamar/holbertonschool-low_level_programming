#include "holberton.h"
/**
 * *_strncpy - print character
 * @src: pointr character
 * @dest : pointr character
 * @n: integer
 * Return: *char
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}

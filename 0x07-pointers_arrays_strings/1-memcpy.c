#include "holberton.h"
/**
 * *_memcpy - print character
 * @dest: pointr character
 * @src: pointr character
 * @n: unsigned integer
 * Return: *char
 **/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

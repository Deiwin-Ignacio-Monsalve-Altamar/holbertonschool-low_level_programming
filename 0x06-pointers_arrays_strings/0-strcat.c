#include "holberton.h"
/**
 * *_strcat - print character
 * @src: pointr character
 * @dest : poinr character
 * Return: *char
 */
char *_strcat(char *dest, char *src)
{
	while(*dest)
	{
		dest++;
	}

	while(*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (dest);
}


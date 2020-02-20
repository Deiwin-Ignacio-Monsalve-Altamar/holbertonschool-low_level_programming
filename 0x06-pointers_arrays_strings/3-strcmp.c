#include "holberton.h"
/**
 * *_strcmp - print character
 * @s1: pointr character
 * @s2 : poinr character
 * Return: int
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	for (i = 0; s1[i] == s2[i]; i++)
	{
		if (s1[i] == '\0')
		return (0);
	}
	return (*s1 - *s2);
}


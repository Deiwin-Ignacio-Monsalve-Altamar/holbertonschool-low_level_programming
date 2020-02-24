#include "holberton.h"
#include <stdio.h>
/**
 * *_strchr - print character
 * @s: pointr character
 * @c: char
 * Return: *char
 */
char *_strchr(char *s, char c)
{
	while (*s != c)
		if (!*s++)
			return (0);
	return (s);
}

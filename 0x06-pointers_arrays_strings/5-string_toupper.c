#include "holberton.h"
/**
 * *string_toupper - print character
 * @s: pointr character
 * Return: *char
 */
char *string_toupper(char *s)
{
	int c = 0;

	while (s[c] != '\0')
	{
	if (s[c] >= 'a' && s[c] <= 'z')
	{
		s[c] = s[c] - 32;
	}
	c++;
	}
	return (s);
}

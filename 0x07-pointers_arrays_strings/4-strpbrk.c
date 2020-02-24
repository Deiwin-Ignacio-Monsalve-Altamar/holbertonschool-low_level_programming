#include "holberton.h"
/**
 * *_strpbrk - print character finally
 * @s: pointr character
 * @accept : pointr character
 * Return: *char
 **/
char *_strpbrk(char *s, char *accept)
{
	const char *r;
	char c;

	while ((c = *s++) != '\0')
	for (r = accept ; *r != '\0'; ++r)
		if (*r == c)
			return (s - 1);
	return ('\0');

}

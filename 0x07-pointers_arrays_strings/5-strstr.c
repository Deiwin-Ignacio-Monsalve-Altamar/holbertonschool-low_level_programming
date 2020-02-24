#include "holberton.h"
/**
 * *_strstr - print character
 * @haystack: pointr character
 * @needle : pointr character
 * Return: *char
 */
char *_strstr(char *haystack, char *needle)
{
	const char *ptr1;
	const char *ptr2;

	for ( ; *haystack; ++haystack)
	{
		ptr1 = needle;
		for (ptr2 = haystack; *ptr1 == *ptr2 && *ptr1; ++ptr1, ++ptr2)
		{
		}
		if (*ptr1 == '\0')
			return (haystack);
	}
	return ('\0');
}

#include "holberton.h"
/**
  * wildcmp - print int
  * @s1: pointr
  * @s2: pointers
  * Return: int
  */
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);
	}
	if (*s2 == '*')
	{
		if (*(s2 + 1) != '\0' && *s1 == 0)
			return (0);
		else
			return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));
	}
	if (*s1 == *s2)
		return (wildcmp(s1 + 1, s2 + 1));

	return (0);
}

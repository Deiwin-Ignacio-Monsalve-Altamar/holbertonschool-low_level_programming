#include "holberton.h"

/**
 * _strlen_recursion - print character
 * @s: pointr character
 * Return: int
 */
int _strlen_recursion(char *s)
{
	int n = 0;

	if (*s == '\0')
	{
		return (n);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}

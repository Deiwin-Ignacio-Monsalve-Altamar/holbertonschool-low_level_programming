#include "holberton.h"
/**
 * rev_string - print character
 * @s: pointr character
 * Return: 0
 */
void rev_string(char *s)
{
	int i, n, size;
	char cpy[1000];

	i = 0;
	size = 0;

	for (n = 0; s[n] != 0; n++)
	{
		cpy[n] = s[n];
	}
	cpy[n] = '\0';
	for (n = 0; s[n] != '\0'; n++)
	{
		size++;
	}
	size--;
	for (; size >= 0; size--)
	{
		s[i] = cpy[size];
		i++;
	}
}

#include "holberton.h"
/**
 * *_strspn - print character
 * @s: pointr character
 * @accept : pointr character
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	int i = 0, x;
	unsigned int j = 0;

	while (s[j] != '\0')
	{
		j++;
	}
	while (s[i] != '\0')
	{
		x = 0;
		while (accept[x] != '\0')
		{
			if (s[i] == accept[x])
			{
				j--;
			}
			x++;
		}
		i++;
	}
	return (j);
}

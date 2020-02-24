#include "holberton.h"
/**
 * *_strspn - print character
 * @s: pointr character
 * @accept : pointr character
 * Return: unsigned int
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x, y, count;

	count = 0;

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; accept[y] != '\0'; y++)
		{
			if (s[x] == accept[y])
			{
				count++;
				break;
			}
		}
		if (s[x] != accept[y])
		{
			break;
		}
	}
	return (count);
}

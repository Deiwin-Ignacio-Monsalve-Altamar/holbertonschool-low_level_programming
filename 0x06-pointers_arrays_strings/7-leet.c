#include "holberton.h"
/**
 * *leet - print character
 * @s: pointr character
 * Return: *char
 */
char *leet(char *s)
{
	char *leet(char *s)
{
	int x, y;
	int repla[] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	int encod[] = {'4', '3', '0', '7', '1'};

	for (x = 0; s[x] != '\0'; x++)
	{
		for (y = 0; y < 10; y++)
		{
			if (s[x] == repla[y])
			{
				s[x] = encod[y / 2];
				y = 9;
			}
		}
	}
	return (s);
}
}

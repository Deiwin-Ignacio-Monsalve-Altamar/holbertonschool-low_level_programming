#include "holberton.h"
/**
 * *rot13 - print character
 * @s: pointr character
 * Return: *char
 */
char *rot13(char *s)
{

	char aux[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char uox[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		j = 0;
		while ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
		{
			if (s[i] == aux[j])
			{
				s[i] = uox[j];
				break;
			}
			j++;
		}
	}
	return (s);
}

#include "holberton.h"
#include <stdio.h>
/**
 * *cap_string - print character
 * @str: pointr character
 * Return: *char
 */
char *cap_string(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] == 48 || str[i] == '	' || str[i] == '\n')
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] = str[i + 1] - 32;
			}
		}
		if (str[i] == 33 || str[i] == 63 || str[i] == 34 || str[i] == 40)
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] = str[i + 1] - 32;
			}
		}
		if (str[i] == 41 || str[i] == '{' || str[i] == '}' || str[i] == 46)
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] = str[i + 1] - 32;
			}
		}
		if (str[i] == 44 || str[i] == 59)
		{
			if (str[i + 1] >= 'a' && str[i + 1] <= 'z')
			{
				str[i + 1] = str[i + 1] - 32;
			}
		}
	}
	return (str);
}

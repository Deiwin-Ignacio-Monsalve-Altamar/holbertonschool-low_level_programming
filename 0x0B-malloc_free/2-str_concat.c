#include "holberton.h"
#include <stdlib.h>
/**
* *str_concat - print character
* @s1: pointr character
* @s2: poinr character
* Return: char s3
**/
char *str_concat(char *s1, char *s2)
{
	int j, i, len1 = 0, len2 = 0;
	char *s3;

	if (s1 == NULL)
		len1 = 0;
	else
	{
		while (s1[len1] != '\0')
			len1++;
	}
	if (s2 == NULL)
		len2 = 0;
	else
	{
		while (s2[len2] != '\0')
			len2++;
	}
	s3 = malloc(sizeof(char) * (len1 + len2 + 1));
	if (s3 == NULL)
		return (s3);
	for (i = 0; i < len1; i++)
		s3[i] = s1[i];
	for (j = 0; j < len2; j++)
		s3[len1 + j] = s2[j];

	s3[len1 + len2] = '\0';
	return (s3);
}

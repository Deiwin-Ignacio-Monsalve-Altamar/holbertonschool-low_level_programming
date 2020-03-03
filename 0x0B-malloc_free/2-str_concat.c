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
	else if (s2 == NULL)
		len2 = 0;
	else if (s1 == NULL && s2 == NULL)
		return (0);
	{
		while (s1[len1] != '\0')
			len1++;
		while (s2[len2] != '\0')
			len2++;
	}
	s3 = malloc(sizeof(char) * (len1 + len2 + 1));
	if (s3 == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		s3[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++, i++)
		s3[i] = s2[j];

	s3[i] = '\0';
	return (s3);
}

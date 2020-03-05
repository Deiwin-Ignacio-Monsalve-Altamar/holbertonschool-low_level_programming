#include "holberton.h"
#include <stdlib.h>
#include <string.h>
/**
* string_nconcat - print character in n
* @s1: pointrs
* @s2: pointrs
* @n: unsigned int
* Return: char
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int j, i, len1 = 0, len2 = 0;
	char *s3;

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
		len2 = len2;
	else
		len2 = n;
	s3 = malloc(sizeof(char) * (len1 + len2 + 1));
	if (s3 == NULL)
		return (s3);
	for (i = 0; i < len1; i++)
		s3[i] = s1[i];
	for (j = 0; j < n; j++)
		s3[len1 + j] = s2[j];

	s3[len1 + len2] = '\0';
	return (s3);
}

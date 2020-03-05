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
	char *s;
	unsigned int i, j = 0, len1 = 0, len2 = 0;

	len1 = strlen(s1);
	len2 = strlen(s2);

	if (n >= len2)
		len1 = len1 + len2;
	else
		len1 = len1 + n;

	s = malloc(sizeof(char) * len1);
	if (s == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		s[i] = s1[i];
	for (j = 0; j < n; j++, i++)
		s[i] = s2[j];
	s[i] = '\0';
	return (s);
}

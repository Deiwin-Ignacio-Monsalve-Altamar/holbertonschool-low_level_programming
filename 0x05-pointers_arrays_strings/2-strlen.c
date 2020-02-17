#include "holberton.h"
/**
 * _strlen - print size of *s
 * @s: pointr char
 * Return: i
 */
int _strlen(char *s)
{
	int i;
	char aux;

	aux = s[0];

	i = 0;
	while (aux != '\0')
	{
		i++;
		aux = s[i];
	}
	return (i);
}

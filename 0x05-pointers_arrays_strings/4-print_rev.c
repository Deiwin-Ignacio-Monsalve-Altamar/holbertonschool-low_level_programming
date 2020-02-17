#include "holberton.h"

/**
 * print_rev - print character
 * @s: pointr character
 * Return: 0
 */
void print_rev(char *s)
{
	int i, j, cont = 0;
	char aux;

	aux = s[0];
	for (i = 0; aux != '\0'; i++)
	{
		aux = s[i];
		cont++;
	}
	for (j = cont - 2; j >= 0; j--)
	{
		_putchar(s[j]);
	}
	_putchar('\n');
}

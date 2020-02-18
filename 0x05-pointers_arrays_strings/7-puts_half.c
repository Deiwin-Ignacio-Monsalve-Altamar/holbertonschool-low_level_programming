#include "holberton.h"
/**
 * puts_half - Write a function that prints a string
 * @str: string
 * Return: void
 */
void puts_half(char *str)
{
	int i, j, n, aux;

	aux = 0;
	n = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		aux++;
	}
	if ((i % 2) == 0)
	{
		n = aux / 2;
		for (j = n; str[n] != '\0'; j++)
		{
			_putchar(str[n]);
			n++;
		}

	}
	else
	{
		n = (i + 1) / 2;
		for (j = (n + 1); str[n] != '\0'; j++)
		{
			_putchar(str[n]);
			n++;
		}

	}
	_putchar('\n');
}

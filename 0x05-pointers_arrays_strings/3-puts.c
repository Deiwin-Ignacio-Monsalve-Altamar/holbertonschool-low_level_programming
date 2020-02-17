#include "holberton.h"

/**
 * _puts - print character
 * @str: pointr character
 * Return: *str
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}

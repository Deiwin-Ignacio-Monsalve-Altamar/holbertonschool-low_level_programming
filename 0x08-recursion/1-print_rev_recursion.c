#include "holberton.h"

/**
 * _print_rev_recursion - print character
 * @s: pointr character
 * Return: 0
 **/
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}

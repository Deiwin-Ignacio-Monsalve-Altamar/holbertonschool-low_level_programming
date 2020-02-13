#include "holberton.h"

/**
 * print_line - print numbers
 *Return: Always 0
 */

void void print_line(int n);
{
	int i;

	if (n != 0)
	{
		i = 1;
		while ( i <= n)
		{
		_putchar('_');
		i++;
	}
	else
	{
		_putchar('\n');
	}
	_putchar('\n');
}


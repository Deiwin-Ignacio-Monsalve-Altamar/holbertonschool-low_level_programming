#include "holberton.h"

/**
 * print_number - print number integer
 *
 * @n: Integer
 * Return: Always 0
 */
void print_number(int n)
{
	unsigned int i = 0;

	if (n < 0)
	{
		i = -1 * n;
		_putchar('-');
	}
	else
	{
		i = n;
	}
	if (i / 10)
	{
		print_number(i / 10);
	}
	_putchar('0' + i % 10);
}


#include "holberton.h"

/**
 * print_number - print number integer
 *
 * @n: Integer
 * Return: Always 0
 */
void print_number(int n)
{
	if (n < 99)
	{
		_putchar((char)((n / 100) / 10) + '0');
		_putchar((char)(n / 10) + '0');
	}
	else if (n < 999)
	{
		_putchar((char)(((n / 1000) / 100) / 10) + '0');
		_putchar((char)((n / 100) / 10) + '0');
		_putchar((char)(n / 10) + '0');
	}
	else
	{
		_putchar((char)(n / 10) + '0');
	}
	_putchar((char)(n % 10) + '0');
}


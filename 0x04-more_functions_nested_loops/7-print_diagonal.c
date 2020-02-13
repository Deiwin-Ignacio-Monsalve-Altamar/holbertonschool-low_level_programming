#include "holberton.h"
/**
 * print_diagonal - print numbers
 *
 * @n: integer
 *
 * Return: Always 0
 */

void print_diagonal(int n)
{
	int i;

	if (n > 0)
	{
		i = 1;
		while (i <= n)
		{
		_putchar(32);
		i++;
		}
		_putchar(92);
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}

#include "holberton.h"

/**
 * print_triangle - print #
 *
 * @size: Integer
 * Return: Always 0
 */
void print_triangle(int size)
{
	int i, j, n, m;

	n = size - 1;
	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			for (j = 0; j <= n; j++)
			{
				_putchar(' ');
			}
			n--;
			for (m = 0; m <= i; m++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}

#include "holberton.h"

/**
 * more_numbers - print ten times the numbers;
 *
 *Return: Always 0
 */

void more_numbers(void)
{
	int i, j;

	i = 0;
	while (i <= 9)
	{
		j = 0;
		while (j <= 14)
		{
			if (j <= 9)
			{
				_putchar('0' + j);
			}
			else
			{
				_putchar((char)(j / 10) + '0');
				_putchar((char)(j % 10) + '0');
			}
			j++;
		}
		_putchar('\n');
		i++;
	}
}


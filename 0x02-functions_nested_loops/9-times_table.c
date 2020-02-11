#include "holberton.h"
/**
 * times_table - print time
 *
 * Return: 0
 */
void times_table(void)
{
	int i, j, r, res;

	for (i = 0; i <= 9; i++)
	{
		r = i * 0;

		_putchar('0' + r);
		for (j = 1; j <= 9; j++)
		{
			res = i * j;

			if (res > 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((char)((res / 10) + '0'));
				_putchar((char)((res % 10) + '0'));
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(res + '0');
			}
		}
		_putchar('\n');

	}
}


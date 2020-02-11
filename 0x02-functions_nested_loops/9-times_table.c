#include "holberton.h"
/**
 * times_table - print time reloj
 *
 * Return: 0
 */
void times_table(void)
{
	for (int i = 0; i <= 9; i++)
	{
		int r = i * 0;

		_putchar('0' + r);
		for (int j = 1; j <= 9; j++)
		{
			int res = i * j;

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


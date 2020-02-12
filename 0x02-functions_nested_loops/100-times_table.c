#include "holberton.h"
/**
 * print_times_table - print time
 * @n : integer
 * Return: 0
 */
void print_times_table(int n)
{
	if (n <= 15)
	{
		for (int i = 0; i <= n; i++)
		{
			_putchar('0');
			for (int j = 1; j <= n; j++)
			{
				int res = i * j;

				_putchar(',');
				_putchar(' ');
				if (res > 9)
				{
					if (res > 99)
					{
						_putchar((char)(((res / 100) % 10) + '0'));
						_putchar((char)(((res / 10) % 10) + '0'));
						_putchar((char)((res % 10) + '0'));
					}
					else
					{
						_putchar(' ');
						_putchar((char)((res / 10) + '0'));
						_putchar((char)((res % 10) + '0'));
					}
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar((char)(res + '0'));
				}
			}
		_putchar('\n');
		}
	}
}

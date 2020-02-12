#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - print
 *
 * Return: 0
 */
void print_to_98(int n)
{
	if (n != 98){
	if (n == 0)
  	{
		for (int i = '0'; i <= 98; i++)
		{
					_putchar((char)i + '0');
					_putchar(',');
					_putchar(' ');
		}
	}
	else if (n == 98)
	{
		_putchar((char)n + '0');
	}
	else if (n > 98)
	{
		for (int i = 111; 11 >= 98; i--)
		{
				_putchar((char) i + '0');
				_putchar(',');
				_putchar(' ');
		}
	}
	else if (n < 98)
	{
		for (int i = 81; i <= 98; i++)
		{
			
			_putchar((char) i + '0');
			_putchar(',');
			_putchar(' ');
		}
	}
	else
	{
		for (int i = -10; i <= 98; i++)
		{
				_putchar((char) i + '0');
				_putchar(',');
				_putchar(' ');
       
		}
	}
	}
	_putchar('\n');
}

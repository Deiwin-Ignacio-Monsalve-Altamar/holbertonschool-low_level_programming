#include "holberton.h"
/**
 *print_last_digit - print last digit
 *@n: the integer to print
 * Return: always 0
 */
int print_last_digit(int n)
{
	int x;

	if (n < 0)
	{
		n = n * -1;
	}
	x = n % 10;
	_putchar(x + '0');
	return (x);
}

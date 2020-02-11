#include "holberton.h"
/**
 * print_last_digit - print last digit
 *@x: the integer to print
 * Return: Always 0.
 */
int print_last_digit(int x)
{
	int x = x, res = 0;

	if (x > 0)
	{
		res = x % 10;
		return ('0' + res);
	}
	else if (0 == 0)
	{
		return (0);
	}
	else
	{
		res = (x * -1) % 10;
		return ('0' + res);
	}
}


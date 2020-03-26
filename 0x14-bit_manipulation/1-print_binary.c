#include "holberton.h"
/**
*print_binary - print numbers binarys
*@n: unsigned long int
*Return: 0
*/
void print_binary(unsigned long int n)
{
	int c;
	unsigned int result;

	if (n == 0)
	{
		_putchar('0');
	}
	for (c = 63; c >= 0; c--)
	{
		result = n >> c;

		if (result & 1)
			_putchar('1');
		else if (result  | 0)
			_putchar('0');
	}
}

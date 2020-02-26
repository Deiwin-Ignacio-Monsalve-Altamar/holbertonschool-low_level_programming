#include "holberton.h"

/**
 * _pow_recursion - print character
 * @x: integer
 * @y: integer
 * Return: int
 */
int _pow_recursion(int x, int y)
{
	int base = 0;

	if (y < 0)
	{
		base = -1;
	}
	else if (y > 0)
	{
		base = x * _pow_recursion(x, y - 1);
	}
	else
	{
		base = 1;
	}
	return (base);
}

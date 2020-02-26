#include "holberton.h"

/**
 * factorial - print character
 * @n: integer
 * Return: int
 */
int factorial(int n)
{

	if (n == 0)
	{
		n = 1;
	}
	else if (n < 0)
	{
		n = -1;
	}
	else
	{
		n = n * factorial(n - 1);
	}
	return (n);
}

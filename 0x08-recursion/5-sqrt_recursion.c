#include "holberton.h"
/**
 * raiz - print character
 * @m: integer
 * @i: integer
 * Return: int
 */
int raiz(int m, int i)
{
	if ((i * i) > m)
	{
		return (-1);
	}
	else if ((i * i) == m)
	{
		return (i);
	}
	else
	{
		return (raiz(m, (i + 1)));
	}
}

/**
 * _sqrt_recursion - print character
 * @n: integer
 * Return: int
 */
int _sqrt_recursion(int n)
{
	int result = 1;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else
	{
		return (raiz(n, result));
	}
}


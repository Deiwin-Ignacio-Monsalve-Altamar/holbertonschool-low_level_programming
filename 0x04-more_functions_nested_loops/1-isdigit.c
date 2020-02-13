#include "holberton.h"
/**
 * _isdigit - print caracter
 * @c: the integer print
 * Return: the variable digit
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 58)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


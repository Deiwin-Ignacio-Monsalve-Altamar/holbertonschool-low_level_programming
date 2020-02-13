#include "holberton.h"
/**
 * _isupper - print caracter
 * @c: the integer print
 * Return: the variable digit
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

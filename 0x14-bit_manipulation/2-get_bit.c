#include "holberton.h"
/**
*get_bit - print numbers binarys
*@n: unsigned int pointrs
*@index: unsigned int
*Return: int
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int tmp = 1;

	if (index > sizeof(n) * 8)
	{
		return (-1);
	}
	tmp <<= index;
	if (tmp & n)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

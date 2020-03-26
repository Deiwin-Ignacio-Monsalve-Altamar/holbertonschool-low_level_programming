#include "holberton.h"
/**
*clear_bit - print numbers binarys
*@n: unsigned int pointrs
*@index: unsigned int
*Return: int
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
    if (index < sizeof(n) * 8)
	{
		*n = *n & ~(1 << index);
		return (1);
	}
	return (-1);
}
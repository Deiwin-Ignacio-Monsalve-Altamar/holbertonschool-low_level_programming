#include "holberton.h"
/**
*flip_bits - print numbers binarys
*@n: unsigned int pointrs
*@m: unsigned int
*Return: unsigned long int
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int tmp, cont;

	tmp = n ^ m;

	for (cont = 0; tmp > 0;)
	{
		if ((tmp & 1) == 1)
		{
			cont++;
		}
		tmp = tmp >> 1;
	}
	return (cont);
}


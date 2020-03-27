#include "holberton.h"
/**
*get_endianness - print numbers binarys
*@void: unsigned int pointrs
*
*Return: int
*/
int get_endianness(void)
{
	int x, litle_or_big;

	x = 0;

	litle_or_big = (int) (((char *)&x)[0]);
	return (litle_or_big);
}

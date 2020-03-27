#include "holberton.h"
/**
*get_endianness - print numbers binarys
*@void: unsigned int pointrs
*
*Return: int
*/
int get_endianness(void)
{
	int x = 1;
	char *s  = (char *)&x;

	if (!*s)
	{
		return (1);
	}
    else
    {
	    return (0);
    }
}

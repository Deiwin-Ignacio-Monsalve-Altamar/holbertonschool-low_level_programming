#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
	int j, i;

	j = 48;
	while ( j <= 57)
	{
	i = 97;
	while (i <= 122 )
	{
		_putchar(i);
		i++;
	}
	j++;
	_putchar('\n');
	}
}

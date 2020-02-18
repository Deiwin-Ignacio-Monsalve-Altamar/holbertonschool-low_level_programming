#include "holberton.h"
/**
 * puts2 - check the code for Holberton School students.
 * @str: pointer to the string
 * Return: Always void.
 */
void puts2(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str += 2;
	}
	_putchar('\n');
}

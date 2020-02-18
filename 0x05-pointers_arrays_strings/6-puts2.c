#include "holberton.h"
/**
 * puts2 - check the code for Holberton School students.
 * @str: pointer to the string
 * Return: Always void.
 */
void puts2(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i = i + 2;
	}
	_putchar('\n');
}

#include "holberton.h"
/**
 * puts2 - check the code for Holberton School students.
 * @str: pointer to the string
 * Return: Always void.
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		if ((str[i] % 2) == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}

#include "holberton.h"
/**
 * main - check the code for Holberton School students.
 *
 * Return: Always 0.
 */
int _islower(int c)
{
	int letter;
	if (c >= 'a' && c <= 'z')
	{
		 letter = '1'; 
		_putchar(letter);
	}
	else 
	{
		letter = '0';
        	_putchar(letter);
	}
	return (letter);
}

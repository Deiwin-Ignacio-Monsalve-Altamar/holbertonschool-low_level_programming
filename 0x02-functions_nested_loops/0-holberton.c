#include "holberton.h"
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char nombre[9] = "Holberton";

for (int i  = 0; i <= 8; i++)
{
	_putchar(nombre[i]);
}
_putchar('\n');
return (0);
}


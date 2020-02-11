#include "holberton.h"
/**
 * print_alphabet_x10 - print alphabet x10
 *
 * Return: Always 0.
 */
void print_alphabet_x10(void)
{
int j;
char i;
for (j = 0; j <= 9; j++)
{
for (i = 97; i <= 122; i++)
{
_putchar(i);
}
_putchar('\n');
}
}

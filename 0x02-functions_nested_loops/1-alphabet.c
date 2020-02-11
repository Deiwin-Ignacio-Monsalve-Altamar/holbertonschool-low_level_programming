#include "holberton.h"
/**
 *void print_alphabet(void)
 *
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
char alphabet;
for (alphabet = 97; alphabet <= 122; alphabet++)
{
_putchar(alphabet);
}
_putchar('\n');
}

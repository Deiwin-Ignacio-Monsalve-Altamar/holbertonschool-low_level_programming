#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n;
char letter;

for (n = '0'; n <= '9'; n++)
{
purchar(n);
if (n < '9')
{
purchar(',');
purchar(' ');
}
}
putchar('\n');
return (0);
}

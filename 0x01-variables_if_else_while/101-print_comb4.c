#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int x, z, m;
for (x = '0' ; x <= '7' ; x++)
{
for (z = x + '0' ; z <= '8' ; z++)
{
putchar(x);
putchar(z);
for (m = z + '0'; m <= '9'; m++)
{
}
if (!(z == '8' && m == '9'))
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}

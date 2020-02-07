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
for (z = 1 + x ; z <= '8' ; z++)
{
for (m = 1 + z; m <= '9'; m++)
{
putchar(x);
putchar(z);
putchar(m);
if (!(x = 7 && z = '8' && m = '9'))
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}

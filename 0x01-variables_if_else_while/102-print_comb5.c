#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
  int x, z, m, y;
for (x = '0' ; x <= '9' ; x++)
{
for (z = '0' ; z <= '8' ; z++)
{
for (m = '0'; m <= '9'; m++)
{
for(y = '1'; y <= '9'; y++)
{
putchar(x);
putchar(z);
putchar(' '); 
putchar(m);
putchar(y);
if (!(x == '9' && z == '8' && m == '9' && y == '9'))
{
putchar(',');
putchar(' ');
}
}
}
}
}
putchar('\n');
return (0);
}

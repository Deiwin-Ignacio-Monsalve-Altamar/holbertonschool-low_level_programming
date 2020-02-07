#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{

for (int x = '0' ; x <= '9' ; x++)
{
for (int z = '0' ; z <= '9' ; z++)
{
putchar(x);
putchar(z);
if (!(x == '9' && z == '9'))
{
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}

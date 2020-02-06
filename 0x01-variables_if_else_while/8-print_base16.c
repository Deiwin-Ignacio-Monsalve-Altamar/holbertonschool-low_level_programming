#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char numbers, a;
for (numbers = '0'; numbers <= '9'; numbers++)
{
putchar(numbers);
}
for (a = 'a'; numbers <= 'f'; a++)
{
putchar(a);
}
putchar('\n');
return (0);
}

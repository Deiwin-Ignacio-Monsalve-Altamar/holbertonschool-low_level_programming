#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
char alphabet;
char Alpha;
alphabet = 'a';
Alpha = 'A';
while (alphabet <= 'z')
{
putchar(alphabet);
alphabet++;
}
while (Alpha <= 'Z')
{
putchar(Alpha);
Alpha++;
}
putchar('\n'); 
return (0);
}

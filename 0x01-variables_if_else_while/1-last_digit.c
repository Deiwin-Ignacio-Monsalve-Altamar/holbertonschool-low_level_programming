#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int n, x;
char Primer[] = "Last digit of";
char Segunda[] = "is";
char Tercer[] = "and is 0";
char Cuarta[] = "and is greater than 5";
char Quinta[] = "and is less than 6 and not 0";
srand(time(0));
n = rand() - RAND_MAX / 2;
x = n % 10;
if (x > 5)
printf("%s %d %s %i %s\n", Primer, n, Segunda, x, Cuarta);
else if (x == 0)
printf("%s %d %s %i %s\n", Primer, n, Segunda, x, Tercer);
else
printf("%s %d %s %i %s\n", Primer, n, Segunda, x, Quinta);
return (0);
}

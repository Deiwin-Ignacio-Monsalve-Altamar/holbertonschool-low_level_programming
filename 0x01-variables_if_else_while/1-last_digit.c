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
int n;
char Primer[13] = "Last digit of";
char Segunda[2] = "is";
char Tercer[8] = "and is 0";
char Cuarta[19] = "and is greater than 5";
char Quinta[28] = "and is less than 6 and not 0";
srand(time(0));
n = rand() - RAND_MAX / 2;
int x = n % 10;
if (x > 5)
printf("%s %d %s %i %s\n", Primer, n, Segunda, x, Cuarta);
else if (x == 0)
printf("%s %d %s %i %s\n", Primer, n, Segunda, x, Tercer);
else
printf("%s %d %s %i %s\n", Primer, n, Segunda, x, Quinta);
return (0);
}

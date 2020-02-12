#include <stdio.h>

/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/

int main(void)
{
	int i, n = 1, m = 2, fib;

	for (i = 1; i <= 50; ++i)
	{
		printf("%d, ", n);
		fib = n + m;
		n = m;
		m = fib;
	}
	putchar('\n');
	return (0);
}

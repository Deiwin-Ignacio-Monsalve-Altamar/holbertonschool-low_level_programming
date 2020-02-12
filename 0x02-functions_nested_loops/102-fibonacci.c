#include <stdio.h>

/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/

int main(void)
{
	unsigned long int  i, n = 1, m = 2, fib;

	for (i = 1; i <= 50; ++i)
	{
		if(i != 50)
		{
			printf("%lu, ", n);
			fib = n + m;
			n = m;
			m = fib;
		}
		else
		{
			printf("%lu\n", n);
		}
	}
	return (0);
}

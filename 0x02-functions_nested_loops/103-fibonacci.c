#include <stdio.h>
/**
* main - tests function that print fibonacci
* Return: 0
*/
int main(void)
{
	unsigned long long a = 1, b = 2, i, c, sum = 0;

	for (i = 0; i <= 4000000; i++)
	{
	c = a + b;
	if ((c % 2) == 0)
		sum += c;

	a = b;
	b = c;
	}
	printf("%lu\n", sum);
	return (0);
}


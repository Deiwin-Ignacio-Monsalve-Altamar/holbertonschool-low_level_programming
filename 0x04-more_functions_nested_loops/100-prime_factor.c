#include <stdio.h>
/**
 * main - print numbers
 *
 * Return: Always 0
 */

int main(void)
{
	 int n, div = 2, maxFact;

	n = 15;

	while (n != 0)
	{
		if (n % div != 0)
			div = div + 1;
		else
		{
			maxFact = n;
			n = n / div;
			if (n == 1)
			{
				printf("%d\n", maxFact);
				break;
			}
		}
	}
	return (0);
}

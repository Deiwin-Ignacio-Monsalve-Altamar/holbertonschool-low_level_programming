#include <stdio.h>
/**
 * main - print fizz-buzz
 *
 * Return: Always 0
 */

int main(void)
{
	int i, multi, multo;

	for (i = 1; i <= 100; i++)
	{
		multi = i % 3;
		multo = i % 5;
		if (multi == 0 && multo == 0)
		{
			printf("FizzBuzz ");
		}
		else if (multi == 0)
		{
			printf("Fizz ");
		}
		else if (multo == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%i ", i);
		}
	}
	printf("\n");
	return (0);
}


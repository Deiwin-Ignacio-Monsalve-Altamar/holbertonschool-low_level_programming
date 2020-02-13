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
		if (i != 100)
		{
			if (multi == 0 && multo == 0)
			{
				printf("FizzBuzz ");
			}
			else if (multo == 0)
			{
				printf("Buzz ");
			}
			else if (multi == 3)
			{
				printf("Fizz ");
			}
			else
			{
				printf("%i ", i);
			}
		}
		else
		{
			printf("Buzz");
		}
	}
	printf("\n");
	return (0);
}


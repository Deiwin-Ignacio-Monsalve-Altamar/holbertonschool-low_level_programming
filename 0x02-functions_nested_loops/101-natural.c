#include<stdio.h>

/**
* main - tests function that prints if integer
* Return: 0
*/

int main(void)
{
	int i, sum;

	for (i = 0; i <= 1024; i++)
	{
		if ((i % 5 == 0) || (i % 3 == 0))
		{
			sum = sum + i;
		}
	}
	printf("%d\n", sum);
	return (0);
}

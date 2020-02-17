#include <stdio.h>

/**
* main - tests function that
* Return: 0
*/

int main(void)
{
	unsigned int f1 = 2, f2 = 1, i, next;

	for (i = 1; i <= 90; i++)
	{
		if (i != 90)
		{
			next = f1 + f2;
			f1 = f2;
			f2 = next;
			printf("%d, ", f2);
		}
		else
		{
			printf("%d\n", f2 * -1);
		}
	}
}


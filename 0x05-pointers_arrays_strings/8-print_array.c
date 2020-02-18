#include "holberton.h"
#include <stdio.h>
/**
 * print_array - Write a function that prints a string
 * @a: string
 * @n: string
 * Return: void
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);
		if (j < (n - 1))
		{
			printf(", ");
		}
		else if (j == (n - 1))
		{
			printf("\n");
		}
	}
}

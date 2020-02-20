#include "holberton.h"
/**
 * reverse_array - print character
 * @a: pointr character
 * @n : integer
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int temp, i;

	temp = 0;
	for (i = 0; i < n / 2; ++i)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}

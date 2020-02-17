#include "holberton.h"

/**
 * swap_int - swap value of a and b
 * @a: pointr integer
 * @b: pointr integer
 * Return: a and b
 */
void swap_int(int *a, int *b)
{
	int n = *a;

	*a = *b;
	*b = n;
}


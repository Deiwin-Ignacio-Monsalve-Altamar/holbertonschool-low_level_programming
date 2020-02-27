#include "holberton.h"
int isprime(int m, int x);

/**
  * is_prime_number - Return number is prime
  * @n: value input
  * Return: int
  */

int is_prime_number(int n)
{

	if (n <= 0)
	{
		return (0);
	}
	else
	{
		return (isprime(n, n - 1));
	}
}

/**
 * isprime - auxiliary  of prime
 * @m: integer
 * @x: integer
 * Return: int
 */

int isprime(int m, int x)
{
	if (x == 2)
		return (1);
	if (x <= 1)
		return (0);
	if (m % x == 0)
	{
		return (0);
	}
	else
	{
		return (isprime(m, x - 1));
	}
}

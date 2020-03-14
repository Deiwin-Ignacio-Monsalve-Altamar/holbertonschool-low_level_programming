#include "variadic_functions.h"
/**
  * sum_them_all - print sum
  * @n: const unsigned integer
  * Return: integer
  */
int sum_them_all(const unsigned int n, ...)
{
	int suma = 0;
	unsigned int i;
	va_list a_ap;
	if (n == 0)
	{

		return (0);
	}

	va_start(a_ap, n);

	for (i = 0; i < n; i++)
		suma += va_arg(a_ap, int);

	va_end(a_ap);
	return (suma);
}

#include "variadic_functions.h"
/**
 * sum_them_all - print sum
 * @n: const unsigned integer
 * Return: integer
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 1;
	char *s;

	if (separator != NULL)
	{
		va_start(ap, n);
		while (i <= n)
		{
			s = va_arg(ap, char *);
			if (s != NULL)
				printf("%s", s);
			else
				printf("(nill)");
			if (i < n)
				printf("%s", separator);
			else
				putchar('\n');
			i++;
		}
		va_end(ap);
	}
}

#include "variadic_functions.h"
/**
 * print_strings - print strings
 * @n: const unsigned integer
 * @separator: const unsigned char
 * Return: 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 1;
	char *s;

	va_start(ap, n);
	while (i <= n)
	{

		s = va_arg(ap, char *);
		if (s != NULL)
		{
			printf("%s", s);
		}
		else
		{
			printf("(nill)");
		}
		if (i < n)
		{
			if (separator != NULL)
				printf("%s",separator);
		}
		i++;
	}
	putchar('\n');
	va_end(ap);
}

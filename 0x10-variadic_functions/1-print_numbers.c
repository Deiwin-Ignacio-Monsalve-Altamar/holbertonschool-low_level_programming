#include "variadic_functions.h"
/**
 * print_numbers - print number
 * @n: const unsigned integer
 * @separator: char
 * Return: 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 1;

	va_start(ap, n);
	while (i <= n)
	{
		if (separator != NULL)
		{
			printf("%d", va_arg(ap, const unsigned int));
			if (i < n)
				printf("%s", separator);
		}
		else
			 printf("%d", va_arg(ap, const unsigned int));

		i++;
	}
	putchar('\n');

	va_end(ap);
}

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

	if (separator != NULL)
	{
		va_start(ap, n);
		while (i <= n)
		{
			printf("%d", va_arg(ap, const unsigned int));
			if (i < n)
				printf("%s", separator);
			i++;
		}
		putchar('\n');
		va_end(ap);
	}
}

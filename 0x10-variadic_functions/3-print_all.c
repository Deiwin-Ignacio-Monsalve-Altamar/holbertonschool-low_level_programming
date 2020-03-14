#include "variadic_functions.h"
/**
* print_all - print other all
* @format: const unsigned integer
* Return: integer
*/
void print_all(const char * const format, ...)
{
	int i;
	int j = 0;
	va_list ap;
	char next;

	va_start(ap, format);
	while (format[i])
	{
		while (j < format)
		{
			printf(va_arg(ap, *));
			j++;
		}
		i++;
	}
	putchar('\n');

	va_end(ap);
}

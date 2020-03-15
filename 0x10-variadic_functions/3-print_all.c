#include "variadic_functions.h"
/**
 *c - print char
 *@ap: va_list
 *Return 0
 */
void c(va_list ap)
{
	printf("%c", va_arg(ap, int));
}
/**
 *i - print char
 *@ap: va_list
 *Return 0
 */
void i(va_list ap)
{
	printf("%d", va_arg(ap, int));
}
/**
 *f - print char
 *@ap: va_list
 *Return 0
 */
void f(va_list ap)
{
	printf("%f", va_arg(ap, double));
}
/**
 *x - print char
 *@ap: va_list
 *Return 0
 */
void x(va_list ap)
{
	char *s;

	s = va_arg(ap, char *);
	if (s != NULL)
	{
		printf("%s", s);
		return;
	}
	printf("(nil)");
}
/**
 *print_all - print char
 *@format: const char * const
 *Return 0
 */
void print_all(const char * const format, ...)
{
	op_t ops[] = {{"c", c}, {"i", i}, {"f", f}, {"s", x}, {NULL, NULL}};
	int i = 0;
	int j;
	char *p = "";
	va_list ap;

	va_start(ap, format);
	while (format[i] != '\0')
	{
		j = 0;
		while (ops[j].op != NULL)
		{
			if (format[i] == ops[j].op[0])
			{
				printf("%s", p);
				ops[j].f(ap);
				p = ", ";
			}
			j++;
		}
		i++;
	}
	putchar('\n');
	va_end(ap);
}

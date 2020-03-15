#ifndef VARIADIC_FUCTIONS
#define VARIADIC_FUCTIONS
#include <stdio.h>
#include <stdarg.h>
typedef struct op
{
	char *op;
	void (*f)(va_list);
} op_t;
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
#endif

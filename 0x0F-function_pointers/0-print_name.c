#include "function_pointers.h"
/**
* print_name - print a name in uppercase
* @name: name of the person
* @(*f)(char *) :  fuctions pointers
* Return: Nothing.
*@f : pointers
*/
void print_name(char *name, void (*f)(char *))
{
	if (name != 0 && f != 0)
		f(name);
}

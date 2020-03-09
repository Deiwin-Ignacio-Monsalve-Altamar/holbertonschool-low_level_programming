#include <stdio.h>
#include "dog.h"
/**
  *print_dog - caracteristicas description
  *@d: pointrs structrs
  * Description: Longer description
  */
void print_dog(struct dog *d)
{
	if (d)
	{
		if ((*d).name == NULL)
			(*d).name = "(nil)";
		if ((*d).owner == NULL)
			(*d).owner = "(nil)";
		printf("Name: %s\n"
			"Age: %f\n"
			"Owner: %s\n", (*d).name, (*d).age, (*d).owner);
	}
}

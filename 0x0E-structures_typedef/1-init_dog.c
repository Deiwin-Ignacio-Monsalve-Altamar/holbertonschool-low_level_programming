#include "dog.h"
/**
*init_dog - caracteristicas description
*@d: pointrs structrs
*@name : character
*@age : float
*@owner: character
* Description: Longer description
*/
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		(*d).name = name;
		(*d).age = age;
		(*d).owner = owner;
	}
}

#include "dog.h"
#include <stdlib.h>
/**
  *init_dog - caracteristicas description
  *@d: pointrs structrs
  *@name : character
  *@age : float
  *@owner: character
  * Description: Longer description
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	(*dog).name = name;
	(*dog).age = age;
	(*dog).owner = owner;
	return (dog);
}

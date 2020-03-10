#include "dog.h"
#include <stdlib.h>
/**
  **new_dog - caracteristicas description
  *@name : character
  *@age : float
  *@owner: character
  *Return: dog_t
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i, j, k;
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (i = 0; name[i] != '\0'; i++)
	{
	}
	for (j = 0; owner[j] != '\0'; j++)
	{
	}
	(*dog).name = malloc(sizeof(char) * i);
	if ((*dog).name == NULL)
	{
		free(dog);
		return (NULL);
	}
	(*dog).owner = malloc(sizeof(char) * j);
		if ((*dog).owner == NULL)
		{
			free((*dog).name);
			free(dog);
			return (NULL);
		}
	for (k = 0; k < i; k++)
		(*dog).name[k] = name[k];
	(*dog).name[k] = '\0';
	(*dog).age = age;
	for (k = 0; k < j; k++)
		(*dog).owner[k] = owner[k];
	(*dog).owner[k] = '\0';
	return (dog);
}

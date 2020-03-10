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
	int i, j;
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (dog);
	for (i = 0; name[i] != '\0'; i++)
	{
	}
	for (j = 0; owner[j] != '\0'; j++)
	{
	}
	(*dog).name = malloc(sizeof(char) * i + 1);
	if ((*dog).name == NULL)
	{
		return (NULL);
	}
	(*dog).owner = malloc(sizeof(char) * j + 1);
		if ((*dog).owner == NULL)
		{
			return (NULL);
		}
	for (j = 0; (*dog).name[j]; j++)
		(*dog).name[j] = name[j];
	(*dog).age = age;
	for (j = 0; (*dog).owner[j]; j++)
		(*dog).owner[j] = owner[j];
	free(dog);
	return (dog);
}

#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - creates a new dog
 * @name: pointer name of dog
 * @age: pointer age of dog
 * @owner: owner of dog
 *
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	unsigned int nr, ar, i;
	dog_t *dog;

	if (name == NULL || owner == NULL)
		return (NULL);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	for (nr = 0; name[nr]; nr++)
		;
	nr++;
	dog->name = malloc(nr * sizeof(char));
	if (dog->name == NULL)
	{
		free(dog);
		return (NULL);
	}
	for (i = 0; i < nr; i++)
		dog->name[i] = name[i];
	dog->age = age;
	for (ar = 0; owner[ar]; ar++)
		;
	ar++;
	dog->owner = malloc(ar * sizeof(char));
	if (dog->owner == NULL)
	{
		free(dog->name);
		free(dog);
		return (NULL);
	}
	for (i = 0; i < ar; i++)
		dog->owner[i] = owner[i];
	return (dog);
}

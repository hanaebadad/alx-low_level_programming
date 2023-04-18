#include <stdlib.h>
#include "dog.h"

/**
  * init_dog - Initializes a structure type of dog
  * @d: pointer to  structure.
  * @name: pointer to the name of the dog.
  * @age: The age of the dog.
  * @owner: ponter to the owner of the dog.
  *
  * Return: void
  */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}

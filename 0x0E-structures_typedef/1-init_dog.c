#include <stdlib.h>
#include <stdio.h>
#include "dog.h"

/**
  * init_dog - doggy
  * @d: struct name parameter
  * @name: dog name
  * @age: dog age
  * @owner: owner name
  */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		exit(0);

	d->name = name;
	d->age = age;
	d->owner = owner;
}



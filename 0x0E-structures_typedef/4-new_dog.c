#include <stdio.h>
#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
  * *_strdup - Return an array of bytes 'h'
  * @str: string to copy
  *
  * Return: null if malloc fail, return pointer
  */
char *_strdup(char *str)
{
	int x, z;
	char *strDUPE;

	if (str == NULL)
		return (NULL);

	for (x = 0; str[x] != '\0'; ++x)
	{
	}

	strDUPE = malloc(x + 1);
	if (strDUPE == NULL)
		return (NULL);

	for (z = 0; z <= x; z++)
	{
		strDUPE[z] = str[z];
	}

	return (strDUPE);
	free(strDUPE);
}
/**
  * new_dog - new struct dog
  * @name: dog name
  * @age: float age
  * @owner: owner name
  * Return: new_dog
  */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	char *namecpy, *ownercpy;

	namecpy = _strdup(name);
	ownercpy = _strdup(owner);

	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
		return (NULL);

	new_dog->name = namecpy;
	new_dog->age = age;
	new_dog->owner = ownercpy;
	return (new_dog);
}


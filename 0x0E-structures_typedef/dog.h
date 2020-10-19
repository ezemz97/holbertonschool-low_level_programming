#ifndef DOG_H
#define DOG_H
/**
  * struct dog - dog stats
  * @name: doggy name
  * @age: doggy age
  * @owner: doggy owner
  *
  * Description: doggy members = doggy name age and owner
  */
struct dog
{
	char *name;
	float age;
	char *owner;
};


int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif

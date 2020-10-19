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

/* dog start */
struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

/* dog end */

int _putchar(char c);
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
char *_strdup(char *str);
#endif

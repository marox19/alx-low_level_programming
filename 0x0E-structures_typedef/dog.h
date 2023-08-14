#ifndef DOG_H
#define DOG_H
/**
  * struct dog - dog information
  *@name: char
  *@age: float
  *@owner: char
  *Description: dog details
  */

struct dog
{
	char *name;

	float age;

	char *owner;
};
typedef dog_t
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif

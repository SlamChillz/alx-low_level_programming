#ifndef DOG_STRUCTURE
#define DOG_STRUCTURE

#include <stdio.h>
#include <stdlib.h>
/**
 * struct dog - a basic structure definition of a dog
 * @name: pointer to a string
 * @age: integer
 * @owner: pointer to a string
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif /* DOG_STRUCTURE */

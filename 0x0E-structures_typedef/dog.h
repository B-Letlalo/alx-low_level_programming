#ifndef DOG_H
#define DOG_H
#include <stdlib.h>
#include <stdio.h>
/**
 * struct dog - stores dog identification
 * @name: name of the dog
 * @owner: owner's name
 * @age: dog's age
 */
typedef struct dog
{
	char *name;
	char *owner;
	float age;
} dog_t;
#endif

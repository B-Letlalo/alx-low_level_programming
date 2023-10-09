#include "main.h"
#include <stdlib.h>
#include "dog.h"
#include <string.h>
/**
 * init_dog -  initialize a variable of type struct dog
 * @d: name of struct
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		/* allocating memory for the name*/
		d->name = malloc(strlen(name) + 1);
		if (d->name != NULL)
		{
			d->name = name;
		}
		/**
		 * initilizing age
		 * no need for memory allocation
		 * because it is not a pointer
		 */
		d->age = age;
		/*allocating memory for the owner*/
		d->owner = malloc(strlen(owner) + 1);
		if (d->owner != NULL)
		{
			d->owner = owner;
		}
	}
}

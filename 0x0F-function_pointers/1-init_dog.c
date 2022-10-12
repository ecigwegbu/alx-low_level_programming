#include "dog.h"
#include <stdlib.h>
#include "_strlen.c"
#include "_strcpy.c"

/**
 * init_dog - initialize a dog
 *
 * @d: pointer to the dog
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog, ie me - LOL
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (!d)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}


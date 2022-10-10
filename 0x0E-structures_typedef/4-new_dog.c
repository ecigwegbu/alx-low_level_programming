#include "dog.h"
#include <stdlib.h>
#include "_strlen.c"
#include "_strcpy.c"

/**
 * new_dog - create a new dog
 *
 * @name: the name of the dog
 * @age: the age of the dog
 * @owner: the owner of the dog, ie me - LOL
 * Return: pointer to the new dog created
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;  /* create a new dog pointer */

	d = malloc(sizeof(dog_t));
	if (!d)
		exit(1);

	init_dog(d, name, age, owner)
	d->name = name;
	d->age = age;
	d->owner = owner;

	return (d);
}




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
	d->name = malloc(_strlen(name) + 1);
	if (!d->name)
		exit(1);
	_strcpy(d->name, name);

	d->age = age;

	d->owner = malloc(_strlen(owner) + 1);
	if (!d->owner)
	{
		free(d->name);
		exit(1);
	}
	_strcpy(d->owner, owner);
}


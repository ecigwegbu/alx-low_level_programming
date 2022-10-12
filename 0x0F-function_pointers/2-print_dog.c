#include <stdio.h>
#include <stdlib.h>
#include "dog.h"

/**
 * print_dog - print dog details
 *
 * @d: pointer to the dog
 */
void print_dog(struct dog *d)
{
	if (!d)
		return;
	printf(d->name == NULL ? "Name: (nil)\n" : "Name: %s\n", d->name);
	printf("Age: %f\n", d->age);
	printf(d->owner == NULL ? "Owner: (nil)\n" : "Owner: %s\n", d->owner);
}

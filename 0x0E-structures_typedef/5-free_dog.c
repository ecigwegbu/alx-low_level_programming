#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - free dog
 *
 * @d: pointer to the dog to free
 */
void free_dog(dog_t *d)
{
	if (!d)
		return;
	/* first free the dog member pointers */
	if (d->name)
		free(d->name);

	if (d->owner)
		free(d->owner);

	/* then free the dog pointer */
	if (d)
		free(d);
}


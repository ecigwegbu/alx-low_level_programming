#ifndef _DOG_H
#define _DOG_H

typedef struct dog dog;
typedef struct dog dog_t;

/**
 * struct dog - dog
 * @name: the name of the dog
 * @age: his age
 * @owner: me
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

dog_t *new_dog(char *name, float age, char *owner);

#endif

#include <stdio.h>
#include "dog.h"
/**
 * init_dog - intializing struct for dog
 * @d: my dog stru
 * @name: first member
 * @age: second member
 * @owner: third member
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}

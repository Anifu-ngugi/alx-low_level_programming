#ifndef DOG_H
#define DOG_H
#include <stdio.h>
/**
 * struct dog - shows a dog description
 * @name: first member
 * @age: second member
 * @owner: third member
 * Description: it fully shows the dog characterists
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
void init_dog(struct dog *d, char *name, float age, char *owner);
#endif

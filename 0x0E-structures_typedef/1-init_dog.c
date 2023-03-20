#include "dog.h"

/**
 * init_dog - init
 * @d: dog
 * @name: name of dog
 * @age: age of dog
 * @owner: the owner
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == 0 || name == 0 || owner == 0)
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}

#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - free
 * @d: pointer to dog_t
 * Return: void
 */
void free_dog(dog_t *d)
{
	if (d == 0)
		return;
	if (d->age != 0)
		free(d->age);
	if (d->owner != 0)
		free(d->owner);
	d->age = 0;
	d->owner = 0;
	free(d);
	d = 0;
}

#include "dog.h"
#include <stdlib.h>

/**
 * leng - size of str
 * @str: string
 * Return: number of char is in the str
 */
int leng(char *str)
{
	if (str == 0 || str[0] == '\0')
		return (0);
	return (1 + leng((str + 1)));
}

/**
 * new_dog - alloc
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: dog_t or 0
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int ln = leng(name);
	int so = leng(owner);
	dog_t *d = (dog_t *)malloc(sizeof(dog_t));
	int max_ = (ln < so) ? so : ln;
	int i = 0;

	if (d == 0)
		return (0);
	d->name = (char *)malloc(sizeof(char) * (ln + 1));
	if (d->name == 0)
	{
		free(d);
		return (0);
	}
	d->age = age;
	d->owner = (char *)malloc(sizeof(char) * (so + 1));
	if (d->owner == 0)
	{
		free(d->name);
		free(d);
		return (0);
	}
	for (i = 0; i < max_; i++)
	{
		if (i < ln)
			d->name[i] = name[i];
		if (i < so)
			d->owner[i] = owner[i];
	}
	d->name[ln] = '\0';
	d->owner[so] = '\0';
	return (d);
}

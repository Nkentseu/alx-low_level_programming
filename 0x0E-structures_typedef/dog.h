#ifndef __DOG_H___
#define __DOG_H___

/**
 * struct dog - Object dog
 * @name: Name of dog
 * @age: age of dog
 * @owner: the owner dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - Typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);

#endif

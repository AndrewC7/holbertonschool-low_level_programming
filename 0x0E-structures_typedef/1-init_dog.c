#include "dog.h"

/**
 * init_dog - initializes dog struct
 *
 * @d: pointer to struct
 * @name: pointer to name
 * @age: input age
 * @owner: pointer to owner
 *
 * Return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == '\0')
		return;
	d->name = name;
	d->age = age;
	d->owner = owner;
}

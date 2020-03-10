#ifndef DOG_H
#define DOG_H

#include <stdio.h>



/**
 * struct dog - dog struct
 *
 * @name: dog name
 * @age: dog age
 * @owner: dog owner
 *
 * Description: Dog name, age, and owner
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};


void init_dog(struct dog *d, char *name, float age, char *owner);

#endif

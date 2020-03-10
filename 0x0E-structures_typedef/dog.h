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

/**
 * struct dog_t - define new type as a new name
 *
 * @name: dog name
 * @age: dog age
 *
 * @owner: owner of dog
 */

typedef struct dog_t
{
	char *name;
	float age;
	char *owner;
} dog_t;




void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif

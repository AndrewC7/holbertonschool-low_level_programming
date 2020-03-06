#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * malloc_checked - allocates memory
 *
 * @b: input to allocate memory for
 *
 * Return: pointer to allocated memory
 */

void *malloc_checked(unsigned int b)
{
	void *memory;

	memory = malloc(b);
	if (!memory)
	{
		exit(98);
	}
	return (memory);
}

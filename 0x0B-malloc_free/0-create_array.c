#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * create_array  - creates and initializes array of chars
 *
 * @size: array size
 * @c: initialization char
 *
 * Return: array
 */
char *create_array(unsigned int size, char c)
{
	char *array = NULL;
	unsigned int x;

	if (size)
		array = (char *)malloc(size * sizeof(char));

	if (array)
		for (x = 0; x < size; x++)
			array[x] = c;

	return (array);
}

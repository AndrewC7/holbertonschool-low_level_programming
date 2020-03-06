#include "holberton.h"
#include <stdlib.h>

/**
 * _calloc - Allocate memory for an array
 *
 * @nmemb: array element
 * @size: array size
 *
 * Return: pointer to array
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int counter;
	char *array;

	if (nmemb == 0 || size == 0)
		return ('\0');

	array = malloc(nmemb * size);

	if (array == NULL)
		return (NULL);

	for (counter = 0; counter < (nmemb * size); counter++)
		array[counter] = 0;

	return (array);
}

#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates array of ints
 *
 * @min: first value of array
 * @max: last value of array
 *
 * Return: pointer to new array
 */

int *array_range(int min, int max)
{
	int *array, *start;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min;

	array = malloc(sizeof(int) * ((max - min) + 1));
	start = array;

	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	for (i = 0; i <= size; i++)
		array[i] = min++;

	return (start);
}

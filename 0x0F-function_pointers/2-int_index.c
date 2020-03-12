#include "function_pointers.h"

/**
 * int_index - search for int
 *
 * @array: array to look thru
 * @size: number of elements
 * @cmp: pointer to cmp func
 *
 * Return: element or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, comp;

	if ((array == NULL ||  cmp == NULL) || size < 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		comp = cmp(array[i]);
		if (comp != 0)
			return (i);
	}
	return (-1);
}

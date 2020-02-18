#include "holberton.h"
/**
 * swap_int - swaps value of 2 ints
 *
 * @a: pointer to int
 *
 * @b: pointer to int
 *
 * Return: Void
 */
void swap_int(int *a, int *b)
{
	int buffer = *a;

	*a = *b;
	*b = buffer;
}

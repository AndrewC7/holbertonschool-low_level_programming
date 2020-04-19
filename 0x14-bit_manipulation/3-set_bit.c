#include "holberton.h"

/**
 *set_bit - Set value of bit to 1 at index
 *
 *@n: number
 *@index: index
 *
 *Return: 1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= 64)
		return (-1);

	*n = *n | 1 << index;
	return (1);
}

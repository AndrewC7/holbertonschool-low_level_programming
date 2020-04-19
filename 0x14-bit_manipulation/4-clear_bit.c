#include "holberton.h"

/**
 * clear_bit - sets the value of  bit to 0 at index
 *
 * @n: number
 * @index: index
 *
 * Return: 1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index < (8 * sizeof(unsigned long int)))
	{
		*n &= ~(1 << index);
		return (1);
	}
	else
		return (-1);
}

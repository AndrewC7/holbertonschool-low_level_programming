#include "holberton.h"

/**
 * get_bit - Get value of bit at given index
 *
 * @n: number
 * @index: index
 *
 * Return: value of bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index < (8 * sizeof(unsigned long int)))
		return ((n >> index) & 1);
	else
		return (-1);
}

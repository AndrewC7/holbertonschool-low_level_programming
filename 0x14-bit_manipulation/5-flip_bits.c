#include "holberton.h"

/**
 * flip_bits - returns number of bits needed to flip to get from one number to another
 *
 * @n: num
 * @m: num passed
 *
 * Return: number of bits needed
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int num = n ^ m;
	int i = 0;

	while (num)
	{
		if (num & 1)
			i++;
		num = num >> 1;
	}
	return (i);
}

#include "holberton.h"
/**
 *  _memcpy - copy memory area
 *
 * @dest: area in memory
 * @src: area in memory
 * @n: number of bytes to copy
 *
 * Return: dest pointer
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

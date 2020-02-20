#include "holberton.h"

/**
 * _strncpy - copies a string
 *
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copy
 *
 * Return: Pointer to start of dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *start = dest;

	while (n)
	{
		if (*src)
		{
			*dest = *src;
			dest++;
			src++;
			n--;
		}
		else
		{
			*dest = '\0';
			dest++;
			n--;
		}
	}
	return (start);
}

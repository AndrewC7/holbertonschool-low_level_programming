#include "holberton.h"

/**
 * _strncat - concatenates two strings using n bytes from src
 *
 * @dest: destination string
 * @src: source string
 * @n: length of src to concat
 *
 * Return: pointer to start of dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *start = dest;

	while (*dest != '\0')
		dest++;

	while (n && *src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}
	*dest = '\0';
	return (start);
}

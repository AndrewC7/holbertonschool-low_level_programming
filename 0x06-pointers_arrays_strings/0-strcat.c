#include "holberton.h"
/**
 * _strcat - concats two strings
 *
 * @dest: desintation string
 * @src: source string
 *
 * Return: Void
 */
char *_strcat(char *dest, char *src)
{
	char *start = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return (start);
}

#include "holberton.h"

/**
 * _strchr - locates character in string
 *
 * @s: string to look through
 * @c: character to look for
 *
 * Return: first occurance of character or NULL
 */
char *_strchr(char *s, char c)
{
	while (s++)
	{
		if (*s == c)
			return (s);

		if (*s == '\0')
			return ('\0');
	}
	return ('\0');
}

#include "holberton.h"

/**
 * _strspn - gets length of prefix substring
 *
 * @s: input string
 * @accept: substring to looked for
 *
 * Return: number of bytes in s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int x = 0, y;

	while (s[x] != '\0')
	{
		y = 0;
		while (accept[y] != '\0' && s[x] != accept[y])
			y++;
		if (accept[y] == '\0')
			return (x);
		x++;
	}
	return (x);
}

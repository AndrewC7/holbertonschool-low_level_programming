#include "holberton.h"

/**
 * _strpbrk - locates first occurance of any bytes in string "accept"
 *
 * @s: string to evaluate
 * @accept: input string
 *
 * Return: Zero
 */
char *_strpbrk(char *s, char *accept)
{
	int x, y;

	for (x = 0; s[x] != '\0'; x++)
		for (y = 0; accept[y] != '\0'; y++)
			if (accept[y] == s[x])
				return (s + x);
	return ('\0');
}

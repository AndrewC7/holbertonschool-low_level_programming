#include "holberton.h"

/**
 * leet - encodes a string into 1337.
 *
 * @s: string to be evaluated.
 *
 * Return: the array.
 */
char *leet(char *s)
{
	char letters[] = "AEOTLaeotl";
	char numbers[] = "4307143071";
	int x, y;

	for (x = 0; s[x] != '\0'; x++)
		for (y = 0; letters[y] != '\0'; y++)
			if (s[x] == letters[y])
				s[x] = numbers[y];
	return (s);
}

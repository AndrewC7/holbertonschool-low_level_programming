#include "holberton.h"

/**
 * _strstr - locate substring
 *
 * @haystack: string
 * @needle: substring
 *
 * Return: pointer to beginning of substring or null
 */
char *_strstr(char *haystack, char *needle)
{
	int x;

	while (*haystack)
	{
		x = 0;
		while (haystack[x] && needle[x] && haystack[x] == needle[x])
			x++;
		if (!needle[x])
			return (haystack);
		haystack++;
	}
	return (0);
}

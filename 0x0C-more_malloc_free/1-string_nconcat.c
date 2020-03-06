#include "holberton.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenats two strings
 *
 * @s1: string one
 * @s2: string two
 * @n: number of bytes to concat from s2
 *
 * Return: contatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1, len2, i;
	char *concat_string;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (len1 = 0; s1[len1]; len1++)
		;
	for (len2 = 0; s2[len2]; len2++)
		;
	if (len2 < n)
		n = len2;

	concat_string = malloc(sizeof(char) * (len1 + n + 1));

	if (concat_string == NULL)
		return (NULL);

	for (i = 0; i < len1; i++)
		concat_string[i] = s1[i];

	for (; i < len1 + n; i++)
		concat_string[i] = s2[i - len1];
	concat_string[i] = '\0';

	return (concat_string);
}

#include "holberton.h"
#include "stdlib.h"

/**
 * str_concat - concatenates 2 strings
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: array
 */
char *str_concat(char *s1, char *s2)
{
	char *array = NULL;
	unsigned int x, y;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (x = 0; s1[x] != '\0'; ++x)
		;
	for (y = 0; s2[y] != '\0'; ++y)
		;

	array = (char *)malloc(sizeof(char) * (x + y + 1));

	if (array)
	{
		int x, y;

		for (x = 0; s1[x] != '\0'; x++)
			array[x] = s1[x];
		for (y = 0; s2[y] != '\0'; ++x, ++y)
			array[x] = s2[y];
		array[x] = '\0';
	}
	return (array);
}

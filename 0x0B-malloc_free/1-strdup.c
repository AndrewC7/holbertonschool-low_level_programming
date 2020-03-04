#include <stdlib.h>

/**
 * _strdup - duplicates string
 *
 * @str: string to copy
 *
 * Return: array copy
 */
char *_strdup(char *str)
{

	char *array = NULL;
	unsigned int x;

	if (str)
	{
		for (x = 0; str[x] != '\0'; ++x)
			;
		array = (char *)malloc(sizeof(char) * x + 1);
	}
	if (array)
	{
		for (x = 0; str[x] != 0; x++)
			array[x] = str[x];
		array[x] = '\0';
	}
	return (array);
}

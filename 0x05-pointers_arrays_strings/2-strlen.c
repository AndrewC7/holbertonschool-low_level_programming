#include "holberton.h"
/**
 * _strlen - returns len of string
 *
 * @s: string
 *
 * Return: len of string (count)
 */
int _strlen(char *s)
{
	int count;

	for (; *s != '\0'; s++)
		count++;
	return (count);
}

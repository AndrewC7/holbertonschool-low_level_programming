#include "holberton.h"

/**
 * _strlen_recursion - gets length of string
 *
 * @s: pointer to string to count
 *
 * Return: length of string
 */
int _strlen_recursion(char *s)
{
	static int count;

	if (*s)
	{
		count++;
		_strlen_recursion(s + 1);
	}
	return (count);
}

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
	if (*s)
	{
		return (_strlen_recursion(++s) + 1);
	}
	else
		return (0);
}
